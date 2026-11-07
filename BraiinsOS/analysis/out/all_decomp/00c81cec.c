// FUN_00c81cec @ 00c81cec size=724 calls_out=8 calls_in=1
// strings: polled MutexLockFuture after completion

uint * FUN_00c81cec(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  uint *local_2c;
  undefined1 local_28;
  
  puVar8 = (uint *)*param_1;
  if (puVar8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
  }
  do {
    uVar3 = *puVar8;
    bVar2 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar2);
  *puVar8 = uVar3 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 1) == 0) {
    FUN_00c81a4c(puVar8,param_1[1],0);
    goto LAB_00c81ee8;
  }
  puVar9 = puVar8 + 1;
  do {
    if (*puVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar9);
      goto LAB_00c81d5c;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar2);
  *puVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_00c81d5c:
  uVar3 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)puVar8[2];
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    cVar1 = (char)puVar8[2];
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar3;
    local_2c = puVar9;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01876140,&DAT_0187a770);
  }
  uVar4 = param_1[1];
  if (uVar4 == 0xffffffff) {
    uVar12 = (**(code **)*param_2)(param_2[1]);
    uVar7 = puVar8[7];
    FUN_0098a8a4(puVar8 + 3,uVar7,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
    uVar4 = puVar8[6];
    param_1[1] = uVar7;
    if (uVar4 == 1) {
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = *puVar8 | 2;
    }
  }
  else {
    uVar7 = puVar8[5];
    if ((uVar7 <= uVar4) || (piVar10 = (int *)(puVar8[4] + uVar4 * 0xc), *piVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
    }
    puVar11 = (undefined4 *)piVar10[1];
    puVar5 = (undefined4 *)*param_2;
    uVar4 = param_2[1];
    if (puVar11 == (undefined4 *)0x0) {
      uVar12 = (*(code *)*puVar5)(uVar4);
    }
    else {
      if (puVar5 == puVar11) {
        uVar7 = piVar10[2];
      }
      if (puVar5 == puVar11 && uVar4 == uVar7) goto LAB_00c81e74;
      uVar12 = (*(code *)*puVar5)(uVar4);
      (*(code *)puVar11[3])(piVar10[2]);
    }
    *(undefined8 *)(piVar10 + 1) = uVar12;
  }
LAB_00c81e74:
  if (((uVar3 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(puVar8 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar9;
    bVar2 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar2);
  *puVar9 = 0;
  if (uVar3 == 2) {
    FUN_016d6968(0xf0,puVar9,0x81,1);
  }
  do {
    uVar3 = *puVar8;
    bVar2 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar2);
  *puVar8 = uVar3 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar3 & 1) != 0) {
    return (uint *)0x0;
  }
  FUN_00c81a4c(puVar8,param_1[1],0);
LAB_00c81ee8:
  *param_1 = 0;
  return puVar8;
}

