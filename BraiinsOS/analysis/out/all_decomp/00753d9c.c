// FUN_00753d9c @ 00753d9c size=300 calls_out=5 calls_in=0
// strings: 

void FUN_00753d9c(char *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar2;
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_006bca64(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
    piVar3[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_007536f4(&local_28,*puVar2,uVar5,uVar4);
  if ((char)local_28 != '\x04') {
    FUN_0157c4a0(local_28,local_24);
    return;
  }
  piVar3 = (int *)*puVar2;
  iVar1 = piVar3[2];
  if (*piVar3 == iVar1) {
    FUN_006bca64(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x3a;
  piVar3[2] = iVar1 + 1;
  FUN_007929b8(param_3,puVar2);
  return;
}

