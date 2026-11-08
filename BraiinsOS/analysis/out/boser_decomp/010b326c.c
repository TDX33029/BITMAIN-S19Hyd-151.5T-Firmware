// FUN_010b326c @ 010b326c size=188 calls_out=3 calls_in=0
// strings: 

void FUN_010b326c(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_2d8 [136];
  undefined4 local_250;
  undefined4 local_24c;
  int *local_248;
  undefined1 local_240;
  
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
    pcVar1 = (code *)software_udf(0xfdee,0x10b3328);
    (*pcVar1)();
  }
  FUN_01bed4e2(auStack_2d8,param_2,0x88);
  local_240 = 0;
  local_250 = uVar4;
  local_24c = uVar5;
  local_248 = piVar6;
  iVar3 = thunk_FUN_01be5118(0x2c0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x2c0);
  }
  FUN_01bed4e2(iVar3,auStack_2d8,0x2c0);
  piVar6 = (int *)thunk_FUN_01be5118(0xc);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *piVar6 = iVar3;
  piVar6[1] = (int)&DAT_01c185d4;
  piVar6[2] = (int)&LAB_00feab84;
  return;
}

