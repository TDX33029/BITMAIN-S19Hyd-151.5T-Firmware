// FUN_01a9dd84 @ 01a9dd84 size=488 calls_out=4 calls_in=5
// strings: invalid varint

undefined4 FUN_01a9dd84(char param_1,uint *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_36;
  char local_35;
  undefined1 auStack_34 [12];
  char *local_28;
  code *local_24;
  undefined1 *local_20;
  code *local_1c;
  
  local_36 = 0;
  local_35 = param_1;
  if (param_1 != '\0') {
    local_20 = &local_36;
    local_1c = FUN_01a9dd48;
    local_24 = FUN_01a9dd48;
    local_28 = &local_35;
    FUN_01a924e8(auStack_34,&local_28);
    uVar3 = FUN_01aa428c(auStack_34);
    return uVar3;
  }
  uVar2 = param_3[1];
  if (uVar2 == 0) {
LAB_01a9df30:
    uVar3 = FUN_01aa0da0("invalid varint",0xe);
    return uVar3;
  }
  pbVar4 = (byte *)*param_3;
  bVar1 = *pbVar4;
  if ((char)bVar1 < '\0') {
    if ((uVar2 < 0xb) && ((char)pbVar4[uVar2 - 1] < '\0')) {
      FUN_01a9df74(&local_28,param_3);
      if (local_28 == (char *)0x1) {
        return local_24;
      }
      goto LAB_01a9df20;
    }
    iVar5 = 2;
    local_20 = (undefined1 *)(((uint)bVar1 + (uint)pbVar4[1] * 0x80) - 0x80);
    if (0x7fffffff < (uint)(int)(char)pbVar4[1]) {
      iVar5 = 3;
      local_20 = (undefined1 *)(((int)local_20 + (uint)pbVar4[2] * 0x4000) - 0x4000);
      if (0x7fffffff < (uint)(int)(char)pbVar4[2]) {
        iVar5 = 4;
        iVar7 = (int)local_20 + (uint)pbVar4[3] * 0x200000;
        local_20 = (undefined1 *)(iVar7 - 0x200000);
        if (0x7fffffff < (uint)(int)(char)pbVar4[3]) {
          uVar6 = (uint)pbVar4[4];
          iVar7 = iVar7 + -0x10200000;
          if ((char)pbVar4[4] < '\0') {
            if ((char)pbVar4[5] < '\0') {
              if ((char)pbVar4[6] < '\0') {
                if ((char)pbVar4[7] < '\0') {
                  local_20 = (undefined1 *)(iVar7 + uVar6 * 0x10000000);
                  if ((char)pbVar4[8] < '\0') {
                    if (1 < pbVar4[9]) goto LAB_01a9df30;
                    iVar5 = 10;
                  }
                  else {
                    iVar5 = 9;
                  }
                }
                else {
                  local_20 = (undefined1 *)(iVar7 + uVar6 * 0x10000000);
                  iVar5 = 8;
                }
              }
              else {
                local_20 = (undefined1 *)(iVar7 + uVar6 * 0x10000000);
                iVar5 = 7;
              }
            }
            else {
              local_20 = (undefined1 *)(iVar7 + uVar6 * 0x10000000);
              iVar5 = 6;
            }
          }
          else {
            local_20 = (undefined1 *)(iVar7 + uVar6 * 0x10000000);
            iVar5 = 5;
          }
        }
      }
    }
    iVar7 = uVar2 - iVar5;
    pbVar4 = pbVar4 + iVar5;
  }
  else {
    iVar7 = uVar2 - 1;
    pbVar4 = pbVar4 + 1;
    local_20 = (undefined1 *)(uint)bVar1;
  }
  *param_3 = pbVar4;
  param_3[1] = iVar7;
LAB_01a9df20:
  *param_2 = (uint)local_20;
  return 0;
}

