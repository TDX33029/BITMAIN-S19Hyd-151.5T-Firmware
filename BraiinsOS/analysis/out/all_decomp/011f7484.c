// FUN_011f7484 @ 011f7484 size=672 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011f7484(int *param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar1 = *(undefined1 **)(param_2 + 0x28);
  do {
    uVar9 = FUN_016bd48c(param_2);
    iVar5 = (int)((ulonglong)uVar9 >> 0x20);
    pbVar3 = (byte *)uVar9;
    if (pbVar3 == (byte *)0x0) goto LAB_011f76d4;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    if (iVar5 == 0) {
      local_2c = 1;
      iVar5 = 0;
      goto LAB_011f7710;
    }
    pbVar6 = pbVar3 + iVar5;
    do {
      iVar5 = local_28;
      pbVar4 = pbVar3 + 1;
      uVar7 = (uint)*pbVar3;
      if ((uint)(int)(char)*pbVar3 < 0x80000000) {
joined_r0x011f75ac:
        pbVar3 = pbVar4;
        if (uVar7 != 0x5c) goto LAB_011f762c;
LAB_011f75b0:
        if (pbVar4 == pbVar6) goto LAB_011f76b8;
        pbVar3 = pbVar4 + 1;
        uVar7 = (uint)*pbVar4;
        if (0x7fffffff < (uint)(int)(char)*pbVar4) {
          if (uVar7 < 0xe0) {
            uVar7 = pbVar4[1] & 0x3f | (uVar7 & 0x1f) << 6;
            pbVar3 = pbVar4 + 2;
          }
          else {
            uVar2 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (uVar7 < 0xf0) {
              uVar7 = uVar2 | (uVar7 & 0x1f) << 0xc;
              pbVar3 = pbVar4 + 3;
            }
            else {
              pbVar3 = pbVar4 + 4;
              uVar7 = pbVar4[3] & 0x3f | uVar2 << 6 | (uVar7 & 7) << 0x12;
            }
          }
        }
        if (((0xb < uVar7 - 0x24) || ((1 << (uVar7 - 0x24 & 0xff) & 0xe01U) == 0)) &&
           (uVar7 != 0x5f)) goto LAB_011f76b8;
        if (local_28 == local_30) {
          FUN_011cf828(&local_30,local_28,1,1,1);
        }
      }
      else {
        if (uVar7 < 0xe0) {
          uVar7 = pbVar3[1] & 0x3f | (uVar7 & 0x1f) << 6;
          pbVar4 = pbVar3 + 2;
          goto joined_r0x011f75ac;
        }
        uVar2 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (uVar7 < 0xf0) {
          uVar7 = uVar2 | (uVar7 & 0x1f) << 0xc;
          pbVar4 = pbVar3 + 3;
          goto joined_r0x011f75ac;
        }
        pbVar4 = pbVar3 + 4;
        uVar7 = pbVar3[3] & 0x3f | uVar2 << 6 | (uVar7 & 7) << 0x12;
        pbVar3 = pbVar4;
        if (uVar7 == 0x5c) goto LAB_011f75b0;
LAB_011f762c:
        uVar2 = uVar7 - 0x30;
        bVar8 = 9 < uVar2;
        if (bVar8) {
          uVar2 = (uVar7 & 0xffffffdf) - 0x41;
        }
        if (((bVar8 && 0x19 < uVar2) && (uVar7 != 0x2d && uVar7 != 0x5f)) && (uVar7 != 0x2f)) {
LAB_011f76b8:
          if (local_30 != 0) {
            thunk_FUN_016d3fb4(local_2c);
          }
          goto LAB_011f76c8;
        }
        if (local_28 == local_30) {
          FUN_011cf828(&local_30,local_28,1,1,1);
        }
      }
      iVar5 = iVar5 + 1;
      *(char *)(local_2c + local_28) = (char)uVar7;
      local_28 = iVar5;
    } while (pbVar3 != pbVar6);
  } while (local_30 == -0x7fffffff);
  if (local_30 != -0x80000000) {
LAB_011f7710:
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = iVar5;
    return;
  }
LAB_011f76c8:
  *puVar1 = 1;
LAB_011f76d4:
  *param_1 = -0x80000000;
  return;
}

