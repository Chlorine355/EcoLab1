/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   CEcoLab1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию компонента CEcoLab1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef LAB1_CECOLAB2_H
#define LAB1_CECOLAB2_H

#include "IEcoSystem1.h"
#include "IdEcoMemoryManager1.h"
#include "IEcoLab1.h"
#include "IEcoCalculatorY.h"
#include "IEcoCalculatorX.h"

typedef struct CEcoLab2 {


    IEcoCalculatorYVTbl* m_pVTblIY;

    IEcoCalculatorXVTbl* m_pVTblIX;

    IEcoUnknownVTbl* m_pVTblINondelegatingUnk;

    /* Счетчик ссылок */
    uint32_t m_cRef;

    /* Интерфейс для работы с памятью */
    IEcoMemoryAllocator1* m_pIMem;

    /* Системный интерфейс */
    IEcoSystem1* m_pISys;

    /* Данные экземпляра */
    char_t* m_Name;

    IEcoCalculatorY* m_pIY;

    IEcoUnknown* m_pInnerUnknownLab1;

    IEcoUnknown* m_pInnerUnknownB;

    IEcoCalculatorX* m_pIX;

    IEcoUnknown* m_pIUnkOuter;

} CEcoLab2, *CEcoLab2Ptr;

/* Инициализация экземпляра */


int16_t ECOCALLMETHOD initCEcoLab2(/*in*/ struct IEcoCalculatorY * me, /* in */ IEcoUnknown *pIUnkSystem);
/* Создание экземпляра */
int16_t ECOCALLMETHOD createCEcoLab2(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IEcoCalculatorY** ppIEcoLab2);
/* Удаление */
void ECOCALLMETHOD deleteCEcoLab2(/* in */ IEcoCalculatorY* pIEcoLab2);

#endif /* LAB1_CECOLAB2_H */