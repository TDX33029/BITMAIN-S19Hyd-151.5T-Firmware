// FUN_016dacfc @ 016dacfc size=126 calls_out=1 calls_in=0
// strings: 

uint FUN_016dacfc(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = param_1[0xc];
  local_1c = param_3;
  if (local_14 != 0) {
    local_1c = param_3 - 1;
  }
  local_18 = param_1[0xb];
  local_20 = param_2;
  if (local_1c == 0) {
    software_interrupt(0);
    uVar1 = FUN_016d3496(param_1[0xf]);
  }
  else {
    software_interrupt(0);
    uVar1 = FUN_016d3496(param_1[0xf],&local_20,2);
  }
  if ((int)uVar1 < 1) {
    if (uVar1 == 0) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0x20;
    }
    uVar1 = 0;
    *param_1 = *param_1 | uVar3;
  }
  else if (local_1c < uVar1) {
    puVar2 = (undefined1 *)param_1[0xb];
    param_1[1] = (uint)puVar2;
    param_1[2] = (uint)(puVar2 + (uVar1 - local_1c));
    uVar1 = param_3;
    if (param_1[0xc] != 0) {
      param_1[1] = (uint)(puVar2 + 1);
      *(undefined1 *)(param_2 + param_3 + -1) = *puVar2;
    }
  }
  return uVar1;
}

