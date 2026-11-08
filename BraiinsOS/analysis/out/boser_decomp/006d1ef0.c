// FUN_006d1ef0 @ 006d1ef0 size=228 calls_out=1 calls_in=1
// strings: description | deprecationReason | isDeprecated

undefined4 FUN_006d1ef0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(param_1 + 8);
  uVar3 = 6;
  if (param_2 < 0xc) {
    if (param_2 == 4) {
      if (*piVar1 == 0x656d616e) {
        uVar3 = 0;
      }
      else if (*piVar1 == 0x73677261) {
        uVar3 = 2;
      }
      else if (*piVar1 == 0x65707974) {
        uVar3 = 3;
      }
    }
    else if ((param_2 == 0xb) && (iVar2 = thunk_FUN_01bed842(piVar1,"description",0xb), iVar2 == 0))
    {
      uVar3 = 1;
    }
  }
  else if (param_2 == 0xc) {
    iVar2 = thunk_FUN_01bed842(piVar1,"isDeprecated",0xc);
    uVar3 = 6;
    if (iVar2 == 0) {
      uVar3 = 4;
    }
  }
  else if (param_2 == 0x11) {
    iVar2 = thunk_FUN_01bed842(piVar1,"deprecationReason",0x11);
    uVar3 = 6;
    if (iVar2 == 0) {
      uVar3 = 5;
    }
  }
  return uVar3;
}

