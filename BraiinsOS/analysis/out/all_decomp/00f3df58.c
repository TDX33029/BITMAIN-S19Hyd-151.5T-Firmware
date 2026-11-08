// FUN_00f3df58 @ 00f3df58 size=236 calls_out=5 calls_in=1
// strings: 

int FUN_00f3df58(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00f3ddb8();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  piVar2 = (int *)*puVar3;
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < 2) {
    FUN_00f411dc(piVar2,iVar1,2,1,1);
    iVar1 = piVar2[2];
  }
  piVar2[2] = iVar1 + 2;
  *(undefined2 *)(piVar2[1] + iVar1) = 0x203a;
  FUN_00f3d9b0(&local_20,*puVar3,param_4,param_5);
  if ((char)local_20 == '\x04') {
    *(undefined1 *)(puVar3 + 4) = 1;
    return 0;
  }
  iVar1 = FUN_0157c4a0(local_20,local_1c);
  return iVar1;
}

