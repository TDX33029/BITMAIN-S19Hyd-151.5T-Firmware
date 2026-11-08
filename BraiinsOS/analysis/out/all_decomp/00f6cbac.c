// FUN_00f6cbac @ 00f6cbac size=236 calls_out=2 calls_in=1
// strings: 

uint * FUN_00f6cbac(uint *param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_90 [112];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  if ((char)param_1[0x20] == '\0') {
    puVar1 = &DAT_3b9aca00;
    if (param_2 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar3 = param_2[2];
      puVar4 = (undefined1 *)param_2[6];
      uVar5 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      uVar2 = 0;
      if ((uVar5 & 1) != 0) {
        local_20 = param_2[3];
        local_1c = param_2[4];
        local_18 = param_2[5];
        FUN_016dd1aa(auStack_90,param_2 + 7,0x6c);
        puVar1 = puVar4;
        uVar2 = uVar3;
      }
    }
    param_1[4] = (uint)puVar1;
    param_1[1] = local_20;
    param_1[2] = local_1c;
    *param_1 = uVar2;
    param_1[3] = local_18;
    FUN_016dd1aa(param_1 + 5,auStack_90,0x6c);
    *(undefined1 *)(param_1 + 0x20) = 1;
    FUN_015e8e6c(param_1,&DAT_00f6cc9c);
    return param_1;
  }
  if ((char)param_1[0x20] == '\x01') {
    return param_1;
  }
  return (uint *)0x0;
}

