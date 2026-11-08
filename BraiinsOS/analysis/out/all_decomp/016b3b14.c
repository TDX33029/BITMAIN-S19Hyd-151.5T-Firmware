// FUN_016b3b14 @ 016b3b14 size=204 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_016b3b14(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = 0;
  switch(param_2) {
  case 2:
    uVar1 = (uint)(ushort)*param_1;
    uVar4 = 0x7377;
    break;
  case 3:
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_00418611,3);
    if (iVar2 == 0) {
      return 0x1bb00000001;
    }
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_00418614,3);
    uVar1 = (uint)(iVar2 == 0);
  default:
    return CONCAT44(0x15,uVar1);
  case 4:
    uVar1 = *param_1;
    uVar4 = 0x70747468;
    break;
  case 5:
    iVar2 = thunk_FUN_016dd50a(param_1,&DAT_0041860c,5);
    uVar3 = 0x15;
    if (iVar2 == 0) {
      uVar3 = 0x1bb;
    }
    return CONCAT44(uVar3,(uint)(iVar2 == 0));
  }
  if (uVar1 == uVar4) {
    return 0x5000000001;
  }
  return 0x1500000000;
}

