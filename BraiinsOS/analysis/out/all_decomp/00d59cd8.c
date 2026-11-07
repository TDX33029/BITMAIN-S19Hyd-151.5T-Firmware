// FUN_00d59cd8 @ 00d59cd8 size=444 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00d59cd8(char *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01878150);
  }
  piVar4 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar4;
  if (param_1[1] != '\x01') {
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00d653ec(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*piVar4;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_28,piVar2,&DAT_0035780f,0xf);
  if ((char)local_28 != '\x04') {
    uVar1 = FUN_0157c4a0(local_28,local_24);
    return uVar1;
  }
  piVar2 = (int *)*piVar4;
  iVar3 = piVar2[2];
  if (*piVar2 == iVar3) {
    FUN_00d653ec(piVar2,iVar3,1,1,1);
    iVar3 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar3) = 0x3a;
  piVar2[2] = piVar2[2] + 1;
  piVar4 = (int *)*piVar4;
  if ((param_3 & 1) != 0) {
    FUN_00c52ba8();
    return 0;
  }
  iVar3 = piVar4[2];
  if ((uint)(*piVar4 - iVar3) < 4) {
    FUN_00d653ec(piVar4,iVar3,4,1,1);
    iVar3 = piVar4[2];
  }
  *(undefined4 *)(piVar4[1] + iVar3) = 0x6c6c756e;
  piVar4[2] = piVar4[2] + 4;
  return 0;
}

