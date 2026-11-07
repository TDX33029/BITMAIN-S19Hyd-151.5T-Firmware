// FUN_007539b4 @ 007539b4 size=324 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_007539b4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_006bca64(piVar3,iVar2,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x2c;
    piVar3[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_007536f4(&local_28,*puVar4,param_2,param_3);
  if ((char)local_28 == '\x04') {
    piVar3 = (int *)*puVar4;
    iVar2 = piVar3[2];
    if (*piVar3 == iVar2) {
      FUN_006bca64(piVar3,iVar2,1,1);
      iVar2 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar2) = 0x3a;
    piVar3[2] = iVar2 + 1;
    FUN_007536f4(&local_28,*puVar4,param_4,param_5);
    if ((char)local_28 == '\x04') {
      return 0;
    }
  }
  uVar1 = FUN_0157c4a0(local_28,uStack_24);
  return uVar1;
}

