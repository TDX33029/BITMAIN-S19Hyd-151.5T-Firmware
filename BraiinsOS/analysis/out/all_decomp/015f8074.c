// FUN_015f8074 @ 015f8074 size=596 calls_out=4 calls_in=9
// strings: 

void FUN_015f8074(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 unaff_r7;
  int iVar6;
  undefined8 uVar7;
  int local_30;
  char *local_2c;
  uint local_28;
  int local_24;
  
  iVar6 = *param_3;
  if (iVar6 == -0x80000000) {
    uVar5 = 0;
    goto LAB_015f8214;
  }
  local_28 = param_3[2];
  local_2c = (char *)param_3[1];
  local_30 = iVar6;
  if (local_28 < 8) {
    if (local_28 != 0) {
      if (*local_2c == '\0') {
        local_24 = 0;
        goto LAB_015f8264;
      }
      if (local_28 != 1) {
        if (local_2c[1] == '\0') {
          local_24 = 1;
          goto LAB_015f8264;
        }
        if (local_28 != 2) {
          if (local_2c[2] == '\0') {
            local_24 = 2;
            goto LAB_015f8264;
          }
          if (local_28 != 3) {
            if (local_2c[3] == '\0') {
              local_24 = 3;
              goto LAB_015f8264;
            }
            if (local_28 != 4) {
              if (local_2c[4] == '\0') {
                local_24 = 4;
                goto LAB_015f8264;
              }
              if (local_28 != 5) {
                if (local_2c[5] == '\0') {
                  local_24 = 5;
LAB_015f8264:
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74f8(&DAT_0040fad0,0x2f,&local_30,&DAT_018ab288,&DAT_018aa9e4);
                }
                if ((local_28 != 6) && (local_2c[6] == '\0')) {
                  local_24 = 6;
                  goto LAB_015f8264;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar1 = ((uint)(local_2c + 3) & 0xfffffffc) - (int)local_2c;
    if (uVar1 == 0) {
      uVar1 = 0;
LAB_015f8188:
      do {
        uVar3 = *(uint *)(local_2c + uVar1);
        uVar4 = *(uint *)((int)(local_2c + uVar1) + 4);
        if (((0x1010100 - uVar3 | uVar3) & 0x80808080 & (0x1010100 - uVar4 | uVar4)) != 0x80808080)
        break;
        uVar1 = uVar1 + 8;
      } while (uVar1 <= local_28 - 8);
    }
    else {
      local_24 = 0;
      do {
        if (local_2c[-local_24] == '\0') {
          local_24 = -local_24;
          goto LAB_015f8264;
        }
        local_24 = local_24 + -1;
      } while ((int)local_2c - ((uint)(local_2c + 3) & 0xfffffffc) != local_24);
      if (uVar1 <= local_28 - 8) goto LAB_015f8188;
    }
    if (local_28 != uVar1) {
      local_24 = 0;
      do {
        if (local_2c[local_24 + uVar1] == '\0') {
          local_24 = local_24 + uVar1;
          goto LAB_015f8264;
        }
        local_24 = local_24 + 1;
      } while (local_28 - uVar1 != local_24);
    }
  }
  uVar7 = FUN_00600c38(&local_30);
  unaff_r7 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar5 = (undefined4)uVar7;
LAB_015f8214:
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = param_1;
  puVar2[3] = param_2;
  puVar2[4] = uVar5;
  puVar2[5] = unaff_r7;
  puVar2[6] = 0;
  return;
}

