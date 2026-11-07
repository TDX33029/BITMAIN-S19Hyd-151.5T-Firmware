// FUN_01662d54 @ 01662d54 size=240 calls_out=2 calls_in=1
// strings: 

void FUN_01662d54(uint *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_80 [6];
  undefined1 auStack_68 [56];
  uint local_30;
  uint local_2c;
  
  uVar6 = *param_1;
  uVar4 = param_1[1];
  uVar5 = (uint)(byte)param_2[0x40];
  local_80[0] = param_1[2];
  local_80[1] = param_1[3];
  local_80[2] = param_1[4];
  local_80[3] = param_1[5];
  local_80[4] = param_1[6];
  param_2[uVar5] = 0x80;
  uVar3 = uVar5 << 0x1b | ((uVar6 << 9 | uVar5 << 3) >> 8 & 0xff) << 0x10 |
          ((uVar6 & 0x7fffff) >> 7 & 0xff) << 8 | (uVar6 & 0x7fffff) >> 0xf;
  uVar4 = (uVar6 >> 0x17) << 0x18 | ((uVar4 << 9 | uVar6 >> 0x17) >> 8 & 0xff) << 0x10 |
          ((uVar4 & 0x7fffff) >> 7 & 0xff) << 8 | (uVar4 & 0x7fffff) >> 0xf;
  if ((uVar5 == 0x3f) || (FUN_01bed93e(param_2 + uVar5 + 1,0), (~uVar5 & 0x38) == 0)) {
    FUN_0196c428(local_80,param_2,1);
    FUN_01bed93e(auStack_68,0,0x38);
    puVar2 = auStack_68;
    local_30 = uVar4;
    local_2c = uVar3;
  }
  else {
    *(uint *)(param_2 + 0x38) = uVar4;
    *(uint *)(param_2 + 0x3c) = uVar3;
    puVar2 = param_2;
  }
  FUN_0196c428(local_80,puVar2,1);
  iVar1 = 0;
  param_2[0x40] = 0;
  do {
    uVar3 = local_80[iVar1];
    *(uint *)(param_3 + iVar1 * 4) =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 5);
  return;
}

