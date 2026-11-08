// FUN_00cd5670 @ 00cd5670 size=640 calls_out=6 calls_in=1
// strings: limitDeterminizeExceededSizeLimit | BUG: missing fingerprint

void FUN_00cd5670(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_58;
  int local_54;
  undefined2 local_38;
  undefined1 local_36;
  
  puVar4 = (undefined4 *)*param_2;
  do {
    if (puVar4 == (undefined4 *)param_2[1]) {
      *param_1 = 2;
      return;
    }
    piVar10 = (int *)*puVar4;
    *param_2 = puVar4 + 1;
    puVar4 = puVar4 + 1;
  } while ((char)piVar10[0xf3] != '\x01');
  uVar8 = param_2[2];
  piVar3 = (int *)param_2[3];
  iVar9 = param_2[4];
  iVar11 = piVar10[0xe3];
  param_2[2] = uVar8 + 1;
  do {
    iVar5 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar5 + 1;
  if (-1 < iVar5) {
    puVar4 = (undefined4 *)(*(int *)(*piVar3 + 0x3c4) + -4);
    iVar5 = *(int *)(*piVar3 + 0x3c8) << 2;
    do {
      if (iVar5 == 0) {
        local_58 = 6;
        local_54 = iVar11;
        local_58 = FUN_008e9748(&local_58);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: missing fingerprint",0x18,&local_58,&DAT_01876f2c,&DAT_01876ed4);
      }
      puVar4 = puVar4 + 1;
      piVar3 = (int *)*puVar4;
      iVar5 = iVar5 + -4;
    } while (piVar3[0xe3] != iVar11);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar3 = (int *)*puVar4;
      local_38 = (undefined2)piVar3[0xd4];
      local_36 = *(undefined1 *)((int)piVar3 + 0x352);
      uVar7 = *(undefined4 *)((int)piVar3 + 0x353);
      FUN_016dd1aa(&local_58,(int)piVar3 + 0x357,0x19);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(piVar3);
      }
      uVar6 = *(uint *)(iVar9 + 8);
      if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,uVar6,&DAT_01876ee4);
      }
      uVar12 = *(undefined8 *)(*(int *)(iVar9 + 4) + uVar8 * 8);
      DataMemoryBarrier(0xb);
      if (DAT_018d8068 == 0) {
        FUN_009b16c0((int)uVar12,iVar11,"limitDeterminizeExceededSizeLimit",5);
      }
      *(undefined1 *)((int)param_1 + 0x22) = local_36;
      *(undefined2 *)(param_1 + 8) = local_38;
      *(undefined4 *)((int)param_1 + 0x23) = uVar7;
      param_1[4] = 1;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 6) = uVar12;
      *(undefined8 *)(param_1 + 2) = uVar12;
      FUN_016dd1aa((int)param_1 + 0x27,&local_58,0x19);
      param_1[0x10] = piVar10;
      param_1[0x11] = iVar11;
      *(undefined1 *)(param_1 + 0x12) = 0;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xcd58f0);
  (*pcVar1)();
}

