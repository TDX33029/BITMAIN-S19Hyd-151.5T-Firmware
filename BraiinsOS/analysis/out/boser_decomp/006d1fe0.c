// FUN_006d1fe0 @ 006d1fe0 size=220 calls_out=1 calls_in=1
// strings: directives | queryType | description | mutationType

undefined4 FUN_006d1fe0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 6;
  if (param_2 - 5U < 0xc) {
    param_1 = param_1 + 8;
    switch(param_2) {
    case 5:
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_00474519,5);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      break;
    case 9:
      iVar1 = thunk_FUN_01bed842(param_1,"queryType",9);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      break;
    case 10:
      iVar1 = thunk_FUN_01bed842(param_1,"directives",10);
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 5;
      }
      break;
    case 0xb:
      iVar1 = thunk_FUN_01bed842(param_1,"description",0xb);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      break;
    case 0xc:
      iVar1 = thunk_FUN_01bed842(param_1,"mutationType",0xc);
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      break;
    case 0x10:
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_00568d28,0x10);
      uVar2 = 6;
      if (iVar1 == 0) {
        uVar2 = 4;
      }
    }
  }
  return uVar2;
}

