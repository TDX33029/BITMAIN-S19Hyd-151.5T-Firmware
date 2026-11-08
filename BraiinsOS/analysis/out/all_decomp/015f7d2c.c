// FUN_015f7d2c @ 015f7d2c size=344 calls_out=6 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f7da8) */

int FUN_015f7d2c(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int extraout_r2;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_24 [3];
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x248);
  uVar3 = *(uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if (uVar3 < 3) {
    if (uVar3 == 2) {
      uVar9 = thunk_FUN_016de0ee(2,0x240);
      puVar5 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if (uVar3 == 0 && uVar8 == 0) {
        ClearExclusiveLocal();
        do {
          uVar3 = DAT_018dd9a8 + 1;
          uVar8 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
          if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
            FUN_015ee8c8();
            goto LAB_015f7e70;
          }
          bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
        } while (!bVar2);
        DAT_018dd9a8 = uVar3;
        DAT_018dd9ac = uVar8;
        *puVar5 = uVar3;
        puVar5[1] = uVar8;
      }
      local_24[0] = 0x80000000;
      piVar7 = (int *)FUN_015f8074(uVar3,uVar8,local_24);
    }
    else {
      piVar7 = (int *)FUN_015f7ed0();
    }
  }
  else {
    piVar7 = (int *)(uVar3 - 8);
    do {
      iVar4 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15f7d6c);
      (*pcVar1)();
    }
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 1;
    puVar6[1] = 1;
    puVar6[2] = piVar7;
    puVar6[3] = 0;
    puVar6[4] = 0;
    uVar9 = thunk_FUN_016de0ee(puVar6,puVar6,0x38);
    iVar4 = (int)((ulonglong)uVar9 >> 0x20);
    *(int *)(iVar4 + 0x14) = (int)uVar9 + extraout_r2;
    return iVar4;
  }
LAB_015f7e70:
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,0x18);
}

