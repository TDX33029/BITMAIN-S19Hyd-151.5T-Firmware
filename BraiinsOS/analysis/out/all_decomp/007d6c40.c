// FUN_007d6c40 @ 007d6c40 size=360 calls_out=8 calls_in=1
// strings: 

ulonglong FUN_007d6c40(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [80];
  undefined1 auStack_68 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    param_1[1] = *param_1;
    FUN_01656eb8(auStack_68,&DAT_0185fa50,0,0,200000000,&DAT_0185fa50);
    FUN_016dd1aa(auStack_b8,auStack_68,0x50);
    FUN_016dd1aa(param_1 + 4,auStack_b8,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185fa60);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185fa60);
  case 4:
    goto switchD_007d6c5c_caseD_4;
  }
  iVar2 = FUN_01657fc4(param_1 + 4,*param_2);
  if (iVar2 == 0) {
    FUN_00a07b4c(param_1 + 4);
    iVar2 = *(int *)param_1[1];
    iVar4 = ((int *)param_1[1])[1];
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    param_1[7] = &DAT_0056a778;
    param_1[8] = 8;
    param_1[9] = iVar4;
    param_1[0xb] = iVar2 + 8;
switchD_007d6c5c_caseD_4:
    uVar7 = FUN_007d6eb8(param_1 + 3,param_2);
    if ((uVar7 & 1) == 0) {
      if (*(char *)((int)param_1 + 0x31) == '\x03') {
        uVar5 = param_1[5];
        puVar6 = (undefined4 *)param_1[6];
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return uVar7 & 0xffffffff00000000;
    }
    uVar1 = 4;
  }
  else {
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return CONCAT44(param_2,1);
}

