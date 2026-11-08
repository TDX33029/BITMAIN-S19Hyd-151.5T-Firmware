// FUN_00dde560 @ 00dde560 size=312 calls_out=6 calls_in=1
// strings: 

void FUN_00dde560(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_138 [64];
  undefined4 local_f8;
  undefined1 auStack_f0 [96];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_78 [64];
  undefined4 local_38;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c16260);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16260);
  }
  piVar2 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_138,param_2,0x48);
  FUN_00a2b4fc(local_f8);
  iVar1 = *(int *)(*piVar2 + 0x3c);
  if ((*(int *)(iVar1 + 8) == 2 && *(int *)(iVar1 + 0xc) == 0) ||
     (*(int *)(iVar1 + 0x88) == 5 && *(int *)(iVar1 + 0x8c) == 0)) {
    FUN_0160aaa4(auStack_78,0);
    local_90 = 0;
    local_38 = 0;
    local_8c = 0;
    FUN_01bed4e2(auStack_f0,&local_90,0x60);
    FUN_00f9604c(auStack_138);
    *param_1 = 3;
    param_1[1] = 0;
    FUN_01bed4e2(param_1 + 2,auStack_f0,0x60);
    *(undefined1 *)(param_2 + 0x4c) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00dde600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00dde604 + *(int *)(&DAT_00dde604 + *(int *)(iVar1 + 0x88) * 4)))
            (*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
             *(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar1 + 0x9c));
  return;
}

