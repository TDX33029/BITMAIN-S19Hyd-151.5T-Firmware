// FUN_00078704 @ 00078704  size=2396  callers=2
// program: bmminer


undefined4
FUN_00078704(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4,code *param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 extraout_s1;
  undefined8 uVar7;
  char acStack_d0 [100];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  int local_54;
  char *local_50;
  void *local_4c;
  size_t local_48;
  char *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  undefined8 uStack_30;
  uint local_28;
  size_t local_24;
  undefined4 local_20;
  undefined *local_1c;
  int local_18;
  uint local_14;
  
  local_28 = param_2 & 0x10000;
  uVar4 = param_2 & 0xfffeffff;
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    switch(*param_1) {
    case 0:
      if ((param_2 & 0x20) == 0) {
        local_1c = &DAT_000a9470;
        local_20 = 2;
      }
      else {
        local_1c = &DAT_000a946c;
        local_20 = 1;
      }
      iVar2 = FUN_00078688(param_4,param_1,auStack_6c,0xb);
      if (iVar2 == 0) {
        local_18 = FUN_0007f090(param_1);
        if ((local_28 == 0) && (iVar2 = (*param_5)(&DAT_000a9474,1,param_6), iVar2 != 0)) {
          uVar5 = 0xffffffff;
        }
        else if (local_18 == 0) {
          FUN_0007aca8(param_4,auStack_6c);
          if (local_28 == 0) {
            uVar5 = (*param_5)(&DAT_000a9478,1,param_6);
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          iVar2 = FUN_000781c0(uVar4,param_3 + 1,0,param_5,param_6);
          if (iVar2 == 0) {
            if ((param_2 & 0x80) == 0) {
              while (local_18 != 0) {
                local_40 = FUN_0007f15c(param_1,local_18);
                local_44 = (char *)FUN_0007f1cc(local_18);
                sVar3 = strlen(local_44);
                FUN_000782e0(local_44,sVar3,param_5,param_6,uVar4);
                iVar2 = (*param_5)(local_1c,local_20,param_6);
                if (iVar2 != 0) {
                  return 0xffffffff;
                }
                uVar5 = FUN_0007f208(local_18);
                iVar2 = FUN_00078704(uVar5,uVar4,param_3 + 1,param_4,param_5,param_6);
                if (iVar2 != 0) {
                  return 0xffffffff;
                }
                if (local_40 == 0) {
                  iVar2 = FUN_000781c0(uVar4,param_3,0,param_5,param_6);
                  if (iVar2 != 0) {
                    return 0xffffffff;
                  }
                }
                else {
                  iVar2 = (*param_5)(&DAT_000a9468,1,param_6);
                  if ((iVar2 != 0) ||
                     (iVar2 = FUN_000781c0(uVar4,param_3 + 1,1,param_5,param_6), iVar2 != 0)) {
                    return 0xffffffff;
                  }
                }
                local_18 = local_40;
              }
            }
            else {
              local_48 = FUN_0007eacc(param_1);
              local_4c = (void *)FUN_0007d8a0(local_48 << 2);
              if (local_4c == (void *)0x0) {
                return 0xffffffff;
              }
              local_24 = 0;
              while (local_18 != 0) {
                puVar6 = (undefined4 *)((int)local_4c + local_24 * 4);
                uVar5 = FUN_0007f1cc(local_18);
                *puVar6 = uVar5;
                local_18 = FUN_0007f15c(param_1,local_18);
                local_24 = local_24 + 1;
              }
              if (local_24 != local_48) {
                    /* WARNING: Subroutine does not return */
                __assert_fail("i == size","dump.c",0x160,"do_dump");
              }
              qsort(local_4c,local_48,4,FUN_00078648);
              for (local_24 = 0; local_24 < local_48; local_24 = local_24 + 1) {
                local_50 = *(char **)((int)local_4c + local_24 * 4);
                local_54 = FUN_0007eb20(param_1,local_50);
                if (local_54 == 0) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("value","dump.c",0x16b,"do_dump");
                }
                sVar3 = strlen(local_50);
                FUN_000782e0(local_50,sVar3,param_5,param_6,uVar4);
                iVar2 = (*param_5)(local_1c,local_20,param_6);
                if ((iVar2 != 0) ||
                   (iVar2 = FUN_00078704(local_54,uVar4,param_3 + 1,param_4,param_5,param_6),
                   iVar2 != 0)) {
                  FUN_0007d8e8(local_4c);
                  return 0xffffffff;
                }
                if (local_24 < local_48 - 1) {
                  iVar2 = (*param_5)(&DAT_000a9468,1,param_6);
                  if ((iVar2 != 0) ||
                     (iVar2 = FUN_000781c0(uVar4,param_3 + 1,1,param_5,param_6), iVar2 != 0)) {
                    FUN_0007d8e8(local_4c);
                    return 0xffffffff;
                  }
                }
                else {
                  iVar2 = FUN_000781c0(uVar4,param_3,0,param_5,param_6);
                  if (iVar2 != 0) {
                    FUN_0007d8e8(local_4c);
                    return 0xffffffff;
                  }
                }
              }
              FUN_0007d8e8(local_4c);
            }
            FUN_0007aca8(param_4,auStack_6c);
            if (local_28 == 0) {
              uVar5 = (*param_5)(&DAT_000a9478,1,param_6);
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 0xffffffff;
          }
        }
      }
      else {
        uVar5 = 0xffffffff;
      }
      break;
    case 1:
      iVar2 = FUN_00078688(param_4,param_1,auStack_60,0xb);
      if (iVar2 == 0) {
        local_3c = FUN_0007f66c(param_1);
        if ((local_28 == 0) && (iVar2 = (*param_5)(&DAT_000a9460,1,param_6), iVar2 != 0)) {
          uVar5 = 0xffffffff;
        }
        else if (local_3c == 0) {
          FUN_0007aca8(param_4,auStack_60);
          if (local_28 == 0) {
            uVar5 = (*param_5)(&DAT_000a9464,1,param_6);
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          iVar2 = FUN_000781c0(uVar4,param_3 + 1,0,param_5,param_6);
          if (iVar2 == 0) {
            for (local_14 = 0; local_14 < local_3c; local_14 = local_14 + 1) {
              uVar5 = FUN_0007f6b8(param_1,local_14);
              iVar2 = FUN_00078704(uVar5,uVar4,param_3 + 1,param_4,param_5,param_6);
              if (iVar2 != 0) {
                return 0xffffffff;
              }
              if (local_14 < local_3c - 1) {
                iVar2 = (*param_5)(&DAT_000a9468,1,param_6);
                if ((iVar2 != 0) ||
                   (iVar2 = FUN_000781c0(uVar4,param_3 + 1,1,param_5,param_6), iVar2 != 0)) {
                  return 0xffffffff;
                }
              }
              else {
                iVar2 = FUN_000781c0(uVar4,param_3,0,param_5,param_6);
                if (iVar2 != 0) {
                  return 0xffffffff;
                }
              }
            }
            FUN_0007aca8(param_4,auStack_60);
            if (local_28 == 0) {
              uVar5 = (*param_5)(&DAT_000a9464,1,param_6);
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = 0xffffffff;
          }
        }
      }
      else {
        uVar5 = 0xffffffff;
      }
      break;
    case 2:
      uVar5 = FUN_00080310(param_1);
      uVar1 = FUN_0008035c(param_1);
      uVar5 = FUN_000782e0(uVar5,uVar1,param_5,param_6,uVar4);
      break;
    case 3:
      uVar7 = FUN_000807e0(param_1);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_38 = snprintf(acStack_d0,100,"%lld",uVar5,(int)uVar7,uVar5);
      if ((local_38 < 0) || (99 < local_38)) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (*param_5)(acStack_d0,local_38,param_6);
      }
      break;
    case 4:
      uVar5 = FUN_000809f0(param_1);
      uStack_30 = CONCAT44(extraout_s1,uVar5);
      local_34 = FUN_0007e010(uVar5,acStack_d0,100,uVar4 >> 0xb & 0x1f);
      if (local_34 < 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (*param_5)(acStack_d0,local_34,param_6);
      }
      break;
    case 5:
      uVar5 = (*param_5)(&DAT_000a9448,4,param_6);
      break;
    case 6:
      uVar5 = (*param_5)("false",5,param_6);
      break;
    case 7:
      uVar5 = (*param_5)(&DAT_000a9440,4,param_6);
      break;
    default:
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}

