// FUN_019322a8 @ 019322a8 size=388 calls_out=9 calls_in=0
// strings: 

undefined8 FUN_019322a8(int *param_1,undefined1 *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [64];
  undefined4 local_70;
  undefined4 *local_6c;
  undefined8 uStack_68;
  int local_28;
  int local_24;
  
  FUN_01bed93e(auStack_b0,0,0x40);
  iVar5 = *param_1;
  if (param_2 == (undefined1 *)0x0) {
    param_3 = *(uint *)(iVar5 + 0xc);
    if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,0x40,&DAT_01d25920);
    }
    param_2 = auStack_b0;
  }
  uVar6 = FUN_016bc0ec(param_2,param_3);
  piVar3 = (int *)uVar6;
  if (0x40 < *(uint *)(iVar5 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(iVar5 + 0xc),0x40,&DAT_01d25930);
  }
  FUN_0193a93c(&local_70,auStack_b0);
  uVar7 = FUN_00703dd4(&local_70);
  local_6c = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (local_6c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  local_6c[3] = (int)((ulonglong)uVar7 >> 0x20);
  *local_6c = 1;
  local_6c[1] = 1;
  local_6c[2] = (int)uVar7;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1932418);
    (*pcVar1)();
  }
  local_70 = 1;
  local_28 = iVar5;
  local_24 = iVar5;
  uStack_68 = uVar6;
  iVar5 = thunk_FUN_01be5118(0x50);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(iVar5,&local_70,0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar3,(int)((ulonglong)uVar6 >> 0x20));
  }
  return CONCAT44(&DAT_01d258f8,iVar5);
}

