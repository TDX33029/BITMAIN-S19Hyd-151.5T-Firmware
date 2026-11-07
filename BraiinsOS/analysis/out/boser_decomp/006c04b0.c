// FUN_006c04b0 @ 006c04b0 size=216 calls_out=1 calls_in=1
// strings: description | locations

undefined4 FUN_006c04b0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = 5;
  if (param_2 - 4U < 9) {
    piVar3 = (int *)(param_1 + 8);
    uVar1 = 5;
    switch(param_2) {
    case 4:
      if (*piVar3 == 0x656d616e) {
        return 0;
      }
      uVar1 = 3;
      if (*piVar3 != 0x73677261) {
        uVar1 = 5;
      }
      return uVar1;
    case 9:
      iVar2 = thunk_FUN_01bed842(piVar3,"locations",9);
      uVar1 = 5;
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      return uVar1;
    case 0xb:
      iVar2 = thunk_FUN_01bed842(piVar3,"description",0xb);
      uVar1 = 5;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      return uVar1;
    case 0xc:
      iVar2 = thunk_FUN_01bed842(piVar3,&DAT_003d7298,0xc);
      uVar1 = 5;
      if (iVar2 == 0) {
        uVar1 = 4;
      }
    }
  }
  return uVar1;
}

