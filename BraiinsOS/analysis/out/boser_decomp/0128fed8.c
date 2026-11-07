// FUN_0128fed8 @ 0128fed8 size=208 calls_out=2 calls_in=1
// strings: 

uint * FUN_0128fed8(uint *param_1,uint *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_98 [112];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  
  if ((char)param_1[0x20] == '\0') {
    puVar1 = &DAT_3b9aca00;
    if (param_2 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar5 = param_2[2];
      puVar4 = (undefined1 *)param_2[6];
      uVar3 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      uVar2 = 0;
      if ((uVar3 & 1) != 0) {
        local_28 = param_2[3];
        uStack_24 = param_2[4];
        uStack_20 = param_2[5];
        FUN_01bed4e2(auStack_98,param_2 + 7,0x6c);
        puVar1 = puVar4;
        uVar2 = uVar5;
      }
    }
    *param_1 = uVar2;
    param_1[1] = local_28;
    param_1[2] = uStack_24;
    param_1[3] = uStack_20;
    param_1[4] = (uint)puVar1;
    FUN_01bed4e2(param_1 + 5,auStack_98,0x6c);
    *(undefined1 *)(param_1 + 0x20) = 1;
    FUN_019a2bcc(param_1,&LAB_0128ffac);
  }
  else if ((char)param_1[0x20] != '\x01') {
    param_1 = (uint *)0x0;
  }
  return param_1;
}

