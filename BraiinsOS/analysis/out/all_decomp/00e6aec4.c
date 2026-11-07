// FUN_00e6aec4 @ 00e6aec4 size=364 calls_out=4 calls_in=1
// strings: dps_status

int FUN_00e6aec4(char *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_40 [7];
  
  if (*param_1 != '\0') {
    local_40[0] = 10;
    iVar1 = FUN_0157c50c(local_40,0,0);
    return iVar1;
  }
  iVar1 = FUN_00e5b230(param_1,"dps_status",10);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar5;
  iVar1 = piVar4[2];
  if ((uint)(*piVar4 - iVar1) < 2) {
    FUN_00edff4c(piVar4,iVar1,2,1,1);
    iVar1 = piVar4[2];
  }
  uVar2 = *param_2;
  uVar3 = param_2[1];
  piVar4[2] = iVar1 + 2;
  *(undefined2 *)(piVar4[1] + iVar1) = 0x203a;
  if (uVar2 == 0xb && uVar3 == 0) {
    piVar4 = (int *)*puVar5;
    iVar1 = piVar4[2];
    if ((uint)(*piVar4 - iVar1) < 4) {
      FUN_00edff4c(piVar4,iVar1,4,1,1);
      iVar1 = piVar4[2];
    }
    *(undefined4 *)(piVar4[1] + iVar1) = 0x6c6c756e;
    piVar4[2] = iVar1 + 4;
    *(undefined1 *)(puVar5 + 4) = 1;
    return 0;
  }
  iVar1 = 4;
  if ((uint)(uVar2 < 5) <= -uVar3) {
    iVar1 = uVar2 - 5;
  }
                    /* WARNING: Could not recover jumptable at 0x00e6afa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)(&DAT_00e6afa4 + *(int *)(&DAT_00e6afa4 + iVar1 * 4)))
                    (&DAT_00e6afa4,*(int *)(&DAT_00e6afa4 + iVar1 * 4),-(uVar3 + (uVar2 >= 5)));
  return iVar1;
}

