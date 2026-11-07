// FUN_00cd512c @ 00cd512c size=472 calls_out=4 calls_in=0
// strings: BUG: missing fingerprint

void FUN_00cd512c(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  puVar7 = (undefined4 *)*param_2;
  do {
    if (puVar7 == (undefined4 *)param_2[1]) {
      *param_1 = 2;
      return;
    }
    piVar9 = (int *)*puVar7;
    *param_2 = puVar7 + 1;
    puVar7 = puVar7 + 1;
  } while ((char)piVar9[0xf3] != '\x01');
  piVar6 = (int *)param_2[2];
  puVar7 = (undefined4 *)param_2[3];
  iVar10 = piVar9[0xe3];
  do {
    iVar3 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar3 + 1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*(int *)(*piVar6 + 0x3c4) + -4);
    iVar3 = *(int *)(*piVar6 + 0x3c8) << 2;
    do {
      if (iVar3 == 0) {
        local_48 = 6;
        local_44 = iVar10;
        local_48 = FUN_008e9748(&local_48);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: missing fingerprint",0x18,&local_48,&DAT_01876f2c,&DAT_01876ec4);
      }
      puVar4 = puVar4 + 1;
      piVar6 = (int *)*puVar4;
      iVar3 = iVar3 + -4;
    } while (piVar6[0xe3] != iVar10);
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (-1 < iVar3) {
      piVar6 = (int *)*puVar4;
      local_4c = (undefined2)piVar6[0xd4];
      local_4a = *(undefined1 *)((int)piVar6 + 0x352);
      uVar5 = *(undefined4 *)((int)piVar6 + 0x353);
      FUN_016dd1aa(&local_48,(int)piVar6 + 0x357,0x19);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(piVar6);
      }
      local_50 = local_4c;
      local_4e = local_4a;
      local_78 = local_48;
      uStack_74 = local_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      uStack_68 = uStack_38;
      uStack_64 = uStack_34;
      local_60 = local_30;
      uVar8 = *puVar7;
      *(undefined4 *)((int)param_1 + 0x23) = uVar5;
      param_1[6] = local_58;
      param_1[7] = local_54;
      param_1[4] = 0;
      *(uint *)((int)param_1 + 0x1f) = CONCAT13(local_4a,CONCAT21(local_4c,local_54._3_1_));
      param_1[5] = uVar8;
      *param_1 = 0;
      param_1[1] = uVar8;
      FUN_016dd1aa((int)param_1 + 0x27,&local_78,0x19);
      *(undefined1 *)(param_1 + 0x12) = 0;
      param_1[0x10] = piVar9;
      param_1[0x11] = iVar10;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xcd5300);
  (*pcVar1)();
}

