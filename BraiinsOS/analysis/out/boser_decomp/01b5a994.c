// FUN_01b5a994 @ 01b5a994 size=28 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b2893c) */

undefined4 FUN_01b5a994(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_01b287b0(&DAT_01b20800,param_2,param_2 + 0x28,param_2 + 0x68,*(undefined4 *)(param_2 + 0x24),
               *(undefined4 *)(param_2 + 0x20),1);
  if (*(int *)(param_2 + 0x6c) == 0x1c) {
    puVar2 = (undefined4 *)(param_2 + -4);
    iVar3 = param_1;
    do {
      puVar2 = puVar2 + 1;
      iVar4 = iVar3 + 4;
      FUN_01b27488(iVar3,*puVar2);
      iVar3 = iVar4;
    } while (iVar4 != param_1 + 0x1c);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

