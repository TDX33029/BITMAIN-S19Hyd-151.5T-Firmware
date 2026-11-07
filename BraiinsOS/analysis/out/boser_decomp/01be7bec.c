// FUN_01be7bec @ 01be7bec size=154 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01be7bec(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte *local_34;
  uint local_30 [5];
  
  iVar5 = 0;
  puVar6 = local_30;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  puVar7 = puVar6;
  while( true ) {
    uVar3 = FUN_01bed452(param_1,&local_34,0);
    *puVar7 = uVar3;
    if (local_34 == param_1) {
      return 0;
    }
    bVar1 = *local_34;
    if (bVar1 != 0 && bVar1 != 0x2e) {
      return 0;
    }
    bVar2 = *param_1;
    param_1 = local_34 + 1;
    if (9 < bVar2 - 0x30) {
      return 0;
    }
    if (bVar1 == 0) break;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
    if (iVar5 == 4) {
      return 0;
    }
  }
  if (iVar5 == 1) {
LAB_01be7c5a:
    local_30[2] = local_30[1] & 0xffff;
    local_30[1] = local_30[1] >> 0x10;
  }
  else if (iVar5 != 2) {
    if (iVar5 != 0) goto LAB_01be7c68;
    local_30[1] = local_30[0] & 0xffffff;
    local_30[0] = local_30[0] >> 0x18;
    goto LAB_01be7c5a;
  }
  local_30[3] = local_30[2] & 0xff;
  local_30[2] = local_30[2] >> 8;
LAB_01be7c68:
  puVar4 = (undefined1 *)(param_2 + -1);
  while( true ) {
    if (0xff < local_30[0]) {
      return 0;
    }
    puVar4 = puVar4 + 1;
    *puVar4 = (char)local_30[0];
    if (puVar4 == (undefined1 *)(param_2 + 3)) break;
    puVar6 = puVar6 + 1;
    local_30[0] = *puVar6;
  }
  return 1;
}

