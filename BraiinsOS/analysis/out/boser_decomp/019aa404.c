// FUN_019aa404 @ 019aa404 size=552 calls_out=8 calls_in=1
// strings: 

void FUN_019aa404(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  undefined8 uVar13;
  char local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  cVar2 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar2 != '\x01') {
LAB_019aa604:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d27cc0);
  }
  local_31 = '\0';
  DataMemoryBarrier(0xb);
  if (DAT_01d50330 != 0) {
    FUN_019aa684(&local_31);
  }
  if (local_31 == '\0') {
    uVar13 = thunk_FUN_01bee35a(0,0x238);
    puVar6 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
    uVar8 = *puVar6;
    uVar9 = puVar6[1];
    if (uVar8 == 0 && uVar9 == 0) {
      ClearExclusiveLocal();
      uVar10 = DAT_01d51ab8;
      uVar12 = DAT_01d51abc;
      do {
        uVar5 = DAT_01d51abc;
        uVar4 = DAT_01d51ab8;
        uVar8 = uVar10 + 1;
        uVar9 = uVar12 + (0xfffffffe < uVar10);
        if (CARRY4(uVar12,(uint)(0xfffffffe < uVar10))) {
          FUN_019a7340();
          goto LAB_019aa604;
        }
        if (DAT_01d51ab8 == uVar10 && DAT_01d51abc == uVar12) {
          bVar3 = (bool)hasExclusiveAccess(0x1d51ab8);
          if (bVar3) {
            DAT_01d51ab8 = uVar8;
            DAT_01d51abc = uVar9;
          }
          bVar11 = false;
          if (bVar3) {
            bVar11 = true;
          }
        }
        else {
          bVar11 = false;
          ClearExclusiveLocal();
        }
        uVar10 = uVar4;
        uVar12 = uVar5;
      } while (!bVar11);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
    }
    ClearExclusiveLocal();
    if (uVar8 == DAT_01d50308 && uVar9 == DAT_01d5030c) {
      iVar7 = DAT_01d50314 + 1;
      if (DAT_01d50314 == -1) goto LAB_019aa5e8;
    }
    else {
      do {
        if (DAT_01d50310 != 0) {
          ClearExclusiveLocal();
          goto LAB_019aa5e8;
        }
        bVar3 = (bool)hasExclusiveAccess(0x1d50310);
      } while (!bVar3);
      DAT_01d50310 = 1;
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(0x1d50308);
      } while (!bVar3);
      iVar7 = 1;
      DAT_01d50308 = uVar8;
      DAT_01d5030c = uVar9;
    }
    local_24 = local_24 & 0xffffff00;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    DAT_01d50314 = iVar7;
    if (DAT_01d50318 != 0) {
      FUN_01306fc8(&DAT_01d27764);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19aa628);
      (*pcVar1)();
    }
    DAT_01d50318 = -1;
    FUN_019aa764(&DAT_01d5031c);
    iVar7 = DAT_01d50310;
    DAT_01d50318 = DAT_01d50318 + 1;
    DAT_01d50314 = DAT_01d50314 + -1;
    DAT_01d5031c = local_30;
    DAT_01d50320 = local_2c;
    DAT_01d50324 = local_28;
    DAT_01d50328 = local_24;
    if (DAT_01d50314 == 0) {
      do {
        bVar3 = (bool)hasExclusiveAccess(0x1d50308);
      } while (!bVar3);
      DAT_01d50308 = 0;
      DAT_01d5030c = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(0x1d50310);
      } while (!bVar3);
      DAT_01d50310 = 0;
      if (iVar7 == 2) {
        FUN_01be6c3c(0xf0,&DAT_01d50310,0x81,1);
      }
    }
  }
LAB_019aa5e8:
  FUN_019aa888(DAT_01d51a94);
  return;
}

