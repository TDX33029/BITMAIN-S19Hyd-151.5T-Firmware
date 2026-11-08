// FUN_011e5240 @ 011e5240 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_011e5240(uint *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined1 auStack_30 [24];
  
  FUN_0160ba58(&local_48);
  uVar2 = local_48 & 0xff;
  if (uVar2 == 0xe) {
    FUN_01bed4e2((uint)auStack_30 | 3,(uint)&local_48 | 4,0x10);
    *(undefined1 *)param_1 = 0xe;
    FUN_01bed4e2((undefined1 *)((int)param_1 + 1),auStack_30,0x13);
  }
  else {
    if (uVar2 == 0xf) {
      uVar1 = 0xf;
    }
    else {
      if (uVar2 != 0x10) {
        *param_1 = local_48;
        param_1[1] = uStack_44;
        param_1[2] = uStack_40;
        param_1[3] = uStack_3c;
        param_1[4] = uStack_38;
        param_1[5] = uStack_34;
        return;
      }
      uVar1 = 0x10;
    }
    *(undefined1 *)param_1 = uVar1;
  }
  return;
}

