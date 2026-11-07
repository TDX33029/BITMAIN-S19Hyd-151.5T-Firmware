// FUN_01444d9c @ 01444d9c size=224 calls_out=3 calls_in=3
// strings: 

void FUN_01444d9c(undefined1 *param_1,uint *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_80 [48];
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  if ((char)*param_2 == '\x04') {
    cVar2 = *(char *)((int)param_2 + 1);
    cVar1 = *(char *)((int)param_2 + 2);
    FUN_017726bc(param_3,param_4);
  }
  else {
    local_50 = *param_2;
    local_4c = param_2[1];
    uStack_48 = param_2[2];
    uStack_44 = param_2[3];
    uStack_40 = param_2[4];
    local_3c = param_2[5];
    uStack_38 = param_2[6];
    uStack_34 = param_2[7];
    uStack_30 = param_2[8];
    uStack_2c = param_2[9];
    uStack_28 = param_2[10];
    cVar2 = (char)(param_3 >> 8);
    cVar1 = (char)(param_3 >> 0x10);
    if ((param_3 & 0xff) != 3) {
      if ((local_50 & 0xff) != 3) {
        FUN_017726bc((char)*param_2,param_2[1]);
      }
      local_50 = param_3;
      local_4c = param_4;
      FUN_01bed4e2(auStack_80,(uint)&local_50 | 3,0x29);
      goto LAB_01444e58;
    }
    FUN_0143bfe8(&local_50);
  }
  param_3 = 4;
LAB_01444e58:
  param_1[2] = cVar1;
  param_1[1] = cVar2;
  *param_1 = (char)param_3;
  FUN_01bed4e2(param_1 + 3,auStack_80,0x29);
  return;
}

