// FUN_006d1d10 @ 006d1d10 size=400 calls_out=1 calls_in=2
// strings: possibleTypes | ofType | specifiedByURL | isOneOf | interfaces | enumValues

undefined4 FUN_006d1d10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = 0xb;
  if (param_2 - 4U < 0xb) {
    piVar3 = (int *)(param_1 + 8);
    switch(param_2) {
    case 4:
      if (*piVar3 == 0x646e696b) {
        uVar2 = 0;
      }
      else if (*piVar3 == 0x656d616e) {
        uVar2 = 1;
      }
      break;
    case 6:
      iVar1 = thunk_FUN_01bed842(piVar3,&DAT_00531558,6);
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      else {
        iVar1 = thunk_FUN_01bed842(piVar3,"ofType",6);
        if (iVar1 == 0) {
          uVar2 = 8;
        }
      }
      break;
    case 7:
      iVar1 = thunk_FUN_01bed842(piVar3,"isOneOf",7);
      uVar2 = 0xb;
      if (iVar1 == 0) {
        uVar2 = 10;
      }
      break;
    case 10:
      iVar1 = thunk_FUN_01bed842(piVar3,"interfaces",10);
      if (iVar1 == 0) {
        uVar2 = 4;
      }
      else {
        iVar1 = thunk_FUN_01bed842(piVar3,"enumValues",10);
        if (iVar1 == 0) {
          uVar2 = 6;
        }
      }
      break;
    case 0xb:
      iVar1 = thunk_FUN_01bed842(piVar3,"description",0xb);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = thunk_FUN_01bed842(piVar3,"inputFields",0xb);
        if (iVar1 == 0) {
          uVar2 = 7;
        }
      }
      break;
    case 0xd:
      iVar1 = thunk_FUN_01bed842(piVar3,"possibleTypes",0xd);
      if (iVar1 == 0) {
        uVar2 = 5;
      }
      break;
    case 0xe:
      iVar1 = thunk_FUN_01bed842(piVar3,"specifiedByURL",0xe);
      uVar2 = 0xb;
      if (iVar1 == 0) {
        uVar2 = 9;
      }
    }
  }
  return uVar2;
}

