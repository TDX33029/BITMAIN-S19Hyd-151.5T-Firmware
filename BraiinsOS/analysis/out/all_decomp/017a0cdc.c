// FUN_017a0cdc @ 017a0cdc size=264 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_017a0cdc(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x131c);
  pcVar2 = *(code **)(param_1 + 0x1318);
  if (param_1 < uVar1) {
    FUN_016dd606(param_1 + 0x10,0,0x2c);
    if (pcVar2 == (code *)0x0) {
      thunk_FUN_016d3fb4(uVar1);
      goto LAB_017a0d80;
    }
    (*pcVar2)(uVar3,uVar1);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x14);
    FUN_016dd606(param_1 + 0x10,0,0x2c);
    if (uVar1 == 0) {
      if (param_1 < uVar4) {
        return 0;
      }
      if (pcVar2 == (code *)0x0) {
LAB_017a0d80:
        thunk_FUN_016d3fb4(param_1);
        return 0;
      }
    }
    else {
      if (pcVar2 == (code *)0x0) {
        thunk_FUN_016d3fb4(uVar1);
        if (param_1 < uVar4) {
          return 0;
        }
        goto LAB_017a0d80;
      }
      (*pcVar2)(uVar3,uVar1);
      if (param_1 < uVar4) {
        return 0;
      }
    }
  }
  (*pcVar2)(uVar3,param_1);
  return 0;
}

