// FUN_015f7ed0 @ 015f7ed0 size=340 calls_out=8 calls_in=25
// strings: 

/* WARNING: Removing unreachable block (ram,0x015f7f28) */

int * FUN_015f7ed0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint local_34;
  undefined4 local_30;
  undefined1 uStack_25;
  
  if (param_1 != 0) {
LAB_015f7fdc:
    if (param_1 == 1) {
      FUN_015bee18(&local_34,&uStack_25,&DAT_00410973,0xf3);
      FUN_015ff474(local_34 & 0xff,local_30);
                    /* WARNING: Subroutine does not return */
      FUN_015bef44();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00410915,0xbd,&DAT_018ab114);
  }
  uVar8 = thunk_FUN_016de0ee(0,0x240);
  puVar2 = (uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  puVar7 = (undefined4 *)((int)uVar8 + 0x248);
  *puVar7 = 1;
  if (uVar5 == 0 && uVar6 == 0) {
    ClearExclusiveLocal();
    do {
      uVar5 = DAT_018dd9a8 + 1;
      uVar6 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
      if (CARRY4(DAT_018dd9ac,(uint)(0xfffffffe < DAT_018dd9a8))) {
        param_1 = FUN_015ee8c8();
        goto LAB_015f7fdc;
      }
      bVar1 = (bool)hasExclusiveAccess(0x18dd9a8);
    } while (!bVar1);
    DAT_018dd9a8 = uVar5;
    DAT_018dd9ac = uVar6;
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
  }
  local_34 = 0x80000000;
  piVar3 = (int *)FUN_015f8074(uVar5,uVar6,&local_34);
  FUN_015e8f5c();
  do {
    piVar4 = (int *)*piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = (int)piVar4 + 1;
  if ((int)piVar4 < 0) {
    software_udf(0xfdee,0x15f7fd4);
    return piVar4;
  }
  *puVar7 = piVar3 + 2;
  return piVar3;
}

