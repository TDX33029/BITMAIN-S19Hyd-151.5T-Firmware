// FUN_006d1c08 @ 006d1c08 size=248 calls_out=1 calls_in=2
// strings: description | deprecationReason | defaultValue | isDeprecated

undefined4 FUN_006d1c08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  uVar2 = 6;
  if (param_2 < 0xc) {
    if (param_2 == 4) {
      if (*piVar3 == 0x656d616e) {
        uVar2 = 0;
      }
      else if (*piVar3 == 0x65707974) {
        uVar2 = 2;
      }
    }
    else if ((param_2 == 0xb) && (iVar1 = thunk_FUN_01bed842(piVar3,"description",0xb), iVar1 == 0))
    {
      uVar2 = 1;
    }
  }
  else if (param_2 == 0xc) {
    iVar1 = thunk_FUN_01bed842(piVar3,"defaultValue",0xc);
    if (iVar1 == 0) {
      uVar2 = 3;
    }
    else {
      iVar1 = thunk_FUN_01bed842(piVar3,"isDeprecated",0xc);
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 4;
      }
    }
  }
  else if (param_2 == 0x11) {
    iVar1 = thunk_FUN_01bed842(piVar3,"deprecationReason",0x11);
    uVar2 = 6;
    if (iVar1 == 0) {
      uVar2 = 5;
    }
  }
  return uVar2;
}

