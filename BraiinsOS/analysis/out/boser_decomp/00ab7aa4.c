// FUN_00ab7aa4 @ 00ab7aa4 size=208 calls_out=3 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ab7aa4(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_158 [136];
  undefined4 local_d0;
  undefined4 local_cc;
  int *local_c8;
  undefined1 local_c4;
  
  uVar4 = *(undefined4 *)(param_2 + 0x88);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  piVar6 = (int *)*param_1;
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xab7b74);
    (*pcVar1)();
  }
  FUN_01bed4e2(auStack_158,param_2,0x88);
  local_c4 = 0;
  local_d0 = uVar4;
  local_cc = uVar5;
  local_c8 = piVar6;
  iVar3 = thunk_FUN_01be5118(0x140);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x140);
  }
  FUN_01bed4e2(iVar3,auStack_158,0x140);
  piVar6 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar6 = iVar3;
  piVar6[1] = (int)&DAT_01c0c9b4;
  piVar6[2] = (int)&LAB_00feab84;
  return;
}

