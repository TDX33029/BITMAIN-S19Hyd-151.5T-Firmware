// FUN_00f01e44 @ 00f01e44 size=428 calls_out=3 calls_in=2
// strings: 

void FUN_00f01e44(char param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte local_1e;
  char local_1d [3];
  undefined1 local_1a;
  undefined1 local_19;
  
  cVar1 = '\x02';
  local_1e = param_1 << 3 | 2;
  FUN_01284394(param_3,&local_1e,1);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  bVar7 = (uVar5 & 3) != 2;
  if (bVar7) {
    cVar1 = '\0';
  }
  if (bVar7 && uVar5 != 3) {
    cVar1 = '\0';
    if (param_2[4] == 1) {
      uVar2 = param_2[5];
      uVar4 = LZCOUNT(uVar2 | 1) | 0x20;
      if ((int)uVar2 < 0) {
        uVar4 = LZCOUNT((int)uVar2 >> 0x1f);
      }
      cVar1 = (char)((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
    }
    cVar3 = '\x02';
    if ((uVar5 & 1) != 0) {
      cVar3 = '\v';
    }
    cVar1 = cVar1 + cVar3;
  }
  local_1d[0] = cVar1;
  FUN_01284394(param_3,local_1d,1);
  if (uVar5 != 3 || uVar6 != 0) {
    if (uVar5 == 2 && uVar6 == 0) {
      local_1a = 10;
      FUN_01284394(param_3,&local_1a,1);
      local_19 = 0;
      FUN_01284394(param_3,&local_19,1);
    }
    else {
      local_1d[1] = 0x12;
      FUN_01284394(param_3,local_1d + 1,1);
      uVar6 = param_2[4];
      local_1d[2] = '\0';
      if (uVar6 == 1) {
        uVar2 = param_2[5];
        uVar4 = LZCOUNT(uVar2 | 1) | 0x20;
        if ((int)uVar2 < 0) {
          uVar4 = LZCOUNT((int)uVar2 >> 0x1f);
        }
        local_1d[2] = (char)((uVar4 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
      }
      if ((uVar5 & 1) != 0) {
        local_1d[2] = local_1d[2] + '\t';
      }
      FUN_01284394(param_3,local_1d + 2,1);
      if ((uVar5 & 1) != 0) {
        FUN_01016b28((int)*(undefined8 *)(param_2 + 2),1,param_3);
      }
      if (uVar6 != 0) {
        FUN_00efca88(2,param_2[5],param_3);
        return;
      }
    }
  }
  return;
}

