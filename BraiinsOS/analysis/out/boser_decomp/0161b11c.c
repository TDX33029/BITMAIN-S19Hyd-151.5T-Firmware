// FUN_0161b11c @ 0161b11c size=3116 calls_out=17 calls_in=1
// strings: bridge | dummy | nlmon | vxlan | ipoib | ip6gretap

/* WARNING: Removing unreachable block (ram,0x0161b570) */
/* WARNING: Removing unreachable block (ram,0x0161c488) */
/* WARNING: Removing unreachable block (ram,0x0161b5b4) */
/* WARNING: Removing unreachable block (ram,0x0161b5e8) */
/* WARNING: Removing unreachable block (ram,0x0161b5f0) */
/* WARNING: Removing unreachable block (ram,0x0161b470) */
/* WARNING: Removing unreachable block (ram,0x0161b48c) */
/* WARNING: Removing unreachable block (ram,0x0161b7f8) */
/* WARNING: Removing unreachable block (ram,0x0161b49c) */
/* WARNING: Removing unreachable block (ram,0x0161c588) */
/* WARNING: Removing unreachable block (ram,0x0161c58c) */
/* WARNING: Removing unreachable block (ram,0x0161b4b4) */
/* WARNING: Removing unreachable block (ram,0x0161b7fc) */
/* WARNING: Removing unreachable block (ram,0x0161b834) */
/* WARNING: Removing unreachable block (ram,0x0161b83c) */
/* WARNING: Removing unreachable block (ram,0x0161c33c) */
/* WARNING: Removing unreachable block (ram,0x0161b3c0) */
/* WARNING: Removing unreachable block (ram,0x0161b3f4) */
/* WARNING: Removing unreachable block (ram,0x0161b3f8) */
/* WARNING: Removing unreachable block (ram,0x0161c56c) */
/* WARNING: Removing unreachable block (ram,0x0161c55c) */
/* WARNING: Removing unreachable block (ram,0x0161c32c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0161b11c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  undefined8 uVar11;
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int ****local_c0;
  int ****local_bc;
  int ****local_b8;
  int ****local_b4;
  int ****local_a0;
  int ****local_9c;
  int ****local_98;
  int ****local_94;
  int ****local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *local_58;
  code *local_54;
  undefined4 uStack_50;
  undefined4 *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int ****local_38;
  int ****local_34;
  int ****local_30;
  int ****local_2c;
  
  local_124 = 4;
  local_10c = *param_2;
  local_118 = 0x8000001e;
  uVar5 = (uint)&local_c0 | 4;
  puVar6 = (undefined4 *)((uint)&local_a0 | 4);
  local_120 = 0;
  local_128 = 0;
  local_108 = 0;
LAB_0161b1b4:
  FUN_01623a48(&local_104,&local_10c);
  if (local_104 == -0x7fffffff) {
    param_1[1] = local_128;
    param_1[2] = local_124;
    param_1[3] = local_120;
    *param_1 = 0;
  }
  else {
    if (local_104 != -0x80000000) {
      *param_1 = 1;
      param_1[1] = local_104;
      param_1[2] = local_100;
      param_1[3] = local_fc;
      goto LAB_0161c564;
    }
    local_f4 = local_fc;
    local_f8 = local_100;
    uVar3 = FUN_01623bc0();
    uVar2 = local_f4;
    uVar1 = local_f8;
    switch(uVar3) {
    case 1:
      sVar4 = FUN_01623bc0(local_f8,local_f4);
      if (sVar4 == 1) {
        uVar11 = FUN_01623bf0(uVar1,uVar2);
        FUN_0160ef98(&local_a0,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        ppppiVar9 = local_9c;
        if (((uint)local_a0 & 1) == 0) {
          local_c0 = local_a0;
          local_bc = local_9c;
          local_b8 = local_98;
          local_b4 = local_94;
          if (((uint)local_a0 & 1) == 0) {
            switch(local_94) {
            case (int ****)0x3:
              iVar8 = thunk_FUN_01bed842(local_98,"ifb",3);
              if (iVar8 == 0) {
                local_34 = (int ****)&DAT_80000001;
              }
              else {
                iVar8 = thunk_FUN_01bed842(local_98,"tun",3);
                if (iVar8 == 0) {
                  local_34 = (int ****)0x80000003;
                }
                else {
                  iVar8 = thunk_FUN_01bed842(local_98,"sit",3);
                  if (iVar8 == 0) {
                    local_34 = (int ****)0x80000011;
                  }
                  else {
                    iVar8 = thunk_FUN_01bed842(local_98,"gre",3);
                    if (iVar8 == 0) {
                      local_34 = (int ****)0x80000012;
                    }
                    else {
                      iVar8 = thunk_FUN_01bed842(local_98,"vti",3);
                      if (iVar8 == 0) {
                        local_34 = (int ****)&DAT_80000014;
                      }
                      else {
                        iVar8 = thunk_FUN_01bed842(local_98,"vrf",3);
                        if (iVar8 == 0) {
                          local_34 = (int ****)0x80000015;
                        }
                        else {
                          iVar8 = thunk_FUN_01bed842(local_98,"gtp",3);
                          if (iVar8 == 0) {
                            local_34 = (int ****)&DAT_80000016;
                          }
                          else {
                            iVar8 = thunk_FUN_01bed842(local_98,"hsr",3);
                            if (iVar8 != 0) goto switchD_0161b2ac_caseD_8;
                            local_34 = (int ****)0x8000001b;
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (int ****)0x4:
              if (*local_98 == (int ***)0x6e616c76) {
                local_34 = (int ****)&DAT_80000005;
              }
              else if (*local_98 == (int ***)0x68746576) {
                local_34 = (int ****)0x80000006;
              }
              else if (*local_98 == (int ***)0x646e6f62) {
                local_34 = (int ****)&DAT_80000008;
              }
              else if (*local_98 == (int ***)0x70697069) {
                local_34 = (int ****)0x8000000f;
              }
              else {
                if (*local_98 != (int ***)0x6d726678) goto switchD_0161b2ac_caseD_8;
                local_34 = (int ****)0x80000019;
              }
              break;
            case (int ****)0x5:
              iVar8 = thunk_FUN_01bed842(local_98,"dummy",5);
              if (iVar8 == 0) {
                local_34 = (int ****)&DAT_80000000;
              }
              else {
                iVar8 = thunk_FUN_01bed842(local_98,"nlmon",5);
                if (iVar8 == 0) {
                  local_34 = (int ****)&DAT_80000004;
                }
                else {
                  iVar8 = thunk_FUN_01bed842(local_98,"vxlan",5);
                  if (iVar8 == 0) {
                    local_34 = (int ****)0x80000007;
                  }
                  else {
                    iVar8 = thunk_FUN_01bed842(local_98,"ipoib",5);
                    if (iVar8 != 0) goto switchD_0161b2ac_caseD_8;
                    local_34 = (int ****)0x80000017;
                  }
                }
              }
              break;
            case (int ****)0x6:
              iVar8 = thunk_FUN_01bed842(local_98,"bridge",6);
              if (iVar8 == 0) {
                local_34 = (int ****)0x80000002;
              }
              else {
                iVar8 = thunk_FUN_01bed842(local_98,"ipvlan",6);
                if (iVar8 == 0) {
                  local_34 = (int ****)&DAT_80000009;
                }
                else {
                  iVar8 = thunk_FUN_01bed842(local_98,"ipvtap",6);
                  if (iVar8 == 0) {
                    local_34 = (int ****)0x8000000a;
                  }
                  else {
                    iVar8 = thunk_FUN_01bed842(local_98,"gretap",6);
                    if (iVar8 == 0) {
                      local_34 = (int ****)0x8000000d;
                    }
                    else {
                      iVar8 = thunk_FUN_01bed842(local_98,"ip6tnl",6);
                      if (iVar8 == 0) {
                        local_34 = (int ****)&DAT_80000010;
                      }
                      else {
                        iVar8 = thunk_FUN_01bed842(local_98,"ip6gre",6);
                        if (iVar8 == 0) {
                          local_34 = (int ****)0x80000013;
                        }
                        else {
                          iVar8 = thunk_FUN_01bed842(local_98,"macsec",6);
                          if (iVar8 == 0) {
                            local_34 = (int ****)0x8000001a;
                          }
                          else {
                            iVar8 = thunk_FUN_01bed842(local_98,"geneve",6);
                            if (iVar8 == 0) {
                              local_34 = (int ****)&DAT_8000001c;
                            }
                            else {
                              iVar8 = thunk_FUN_01bed842(local_98,"netkit",6);
                              if (iVar8 != 0) goto switchD_0161b2ac_caseD_8;
                              local_34 = (int ****)0x8000001d;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              break;
            case (int ****)0x7:
              iVar8 = thunk_FUN_01bed842(local_98,"macvlan",7);
              if (iVar8 == 0) {
                local_34 = (int ****)0x8000000b;
              }
              else {
                iVar8 = thunk_FUN_01bed842(local_98,"macvtap",7);
                if (iVar8 != 0) goto switchD_0161b2ac_caseD_8;
                local_34 = (int ****)&DAT_8000000c;
              }
              break;
            default:
switchD_0161b2ac_caseD_8:
              local_2c = local_94;
              local_30 = local_98;
              local_34 = ppppiVar9;
              goto LAB_0161c0d8;
            case (int ****)0x9:
              iVar8 = thunk_FUN_01bed842(local_98,"ip6gretap",9);
              if (iVar8 == 0) {
                local_34 = (int ****)0x8000000e;
              }
              else {
                iVar8 = thunk_FUN_01bed842(local_98,"wireguard",9);
                if (iVar8 != 0) goto switchD_0161b2ac_caseD_8;
                local_34 = (int ****)&DAT_80000018;
              }
            }
            FUN_0134bd64(ppppiVar9,local_98);
LAB_0161c0d8:
            ppppiVar9 = (int ****)&DAT_0000001e;
            if ((int)local_34 < 0) {
              ppppiVar9 = local_34;
            }
                    /* WARNING: Could not recover jumptable at 0x0161c0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_0161c0fc + *(int *)(&DAT_0161c0fc + (int)ppppiVar9 * 4)))(0x80000000);
            return;
          }
        }
        else {
          local_48 = (undefined4 *)*puVar6;
          uStack_44 = puVar6[1];
          uStack_40 = puVar6[2];
          FUN_016403ac(uVar5,&local_48,"invalid IFLA_INFO_KIND value",0x1c);
        }
        local_34 = local_bc;
        local_30 = local_b8;
        local_2c = local_b4;
      }
      else {
        uVar3 = FUN_01623bc0(uVar1,uVar2);
        local_c0 = (int ****)CONCAT22(local_c0._2_2_,uVar3);
        local_a0 = (int ****)&local_c0;
        local_9c = (int ****)FUN_012fcf18;
        FUN_00664898(&local_34,&DAT_005ad95b,&local_a0);
      }
      break;
    case 2:
      FUN_0160f520(&local_a0,"IFLA_INFO_DATA is not preceded by an IFLA_INFO_KIND",0x33);
      goto LAB_0161c3ec;
    case 3:
      FUN_0160f520(&local_a0,"IFLA_INFO_XSTATS is not preceded by an IFLA_INFO_KIND",0x35);
LAB_0161c3ec:
      ppppiVar9 = local_a0;
      ppppiVar10 = local_9c;
LAB_0161c490:
      param_1[1] = ppppiVar9;
      param_1[2] = ppppiVar10;
      param_1[3] = local_98;
      *param_1 = 1;
      goto LAB_0161c564;
    case 4:
      sVar4 = FUN_01623bc0(local_f8,local_f4);
      if (sVar4 == 4) {
        uVar11 = FUN_01623bf0(uVar1,uVar2);
        FUN_0160ef98(&local_a0,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
        ppppiVar9 = local_9c;
        if (((uint)local_a0 & 1) == 0) {
          local_c0 = local_a0;
          local_bc = local_9c;
          local_b8 = local_98;
          local_b4 = local_94;
          if (((uint)local_a0 & 1) == 0) {
            if (local_94 == (int ****)&DAT_00000003) {
              iVar8 = thunk_FUN_01bed842(local_98,"vrf",3);
              if (iVar8 != 0) goto LAB_0161b7e8;
              local_34 = (int ****)0x80000002;
            }
            else if (local_94 == (int ****)&DAT_00000006) {
              iVar8 = thunk_FUN_01bed842(local_98,"bridge",6);
              if (iVar8 != 0) goto LAB_0161b7e8;
              local_34 = (int ****)&DAT_80000001;
            }
            else {
              if ((local_94 != (int ****)&SUB_00000004) || (*local_98 != (int ***)0x646e6f62)) {
LAB_0161b7e8:
                local_2c = local_94;
                local_30 = local_98;
                local_34 = ppppiVar9;
                goto LAB_0161bde4;
              }
              local_34 = (int ****)&DAT_80000000;
            }
            FUN_0134bd64(ppppiVar9,local_98);
LAB_0161bde4:
            ppppiVar9 = (int ****)&DAT_00000003;
            if ((int)local_34 < 0) {
              ppppiVar9 = local_34;
            }
                    /* WARNING: Could not recover jumptable at 0x0161be0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((int)&DAT_0161be10 + (&DAT_0161be10)[(int)ppppiVar9]))(0x80000000);
            return;
          }
        }
        else {
          local_48 = (undefined4 *)*puVar6;
          uStack_44 = puVar6[1];
          uStack_40 = puVar6[2];
          FUN_016403ac(uVar5,&local_48,"invalid IFLA_INFO_PORT_KIND value",0x21);
        }
        local_34 = local_bc;
        local_30 = local_b8;
        local_2c = local_b4;
      }
      else {
        uVar3 = FUN_01623bc0(uVar1,uVar2);
        local_c0 = (int ****)CONCAT22(local_c0._2_2_,uVar3);
        local_a0 = (int ****)&local_c0;
        local_9c = (int ****)FUN_012fcf18;
        FUN_00664898(&local_34,&DAT_00588606,&local_a0);
      }
      break;
    case 5:
      FUN_0160f520(&local_a0,"IFLA_INFO_PORT_DATA is not preceded by an IFLA_INFO_PORT_KIND",0x3d);
      param_1[1] = local_a0;
      param_1[2] = local_9c;
      param_1[3] = local_98;
      *param_1 = 1;
      goto LAB_0161c564;
    default:
      FUN_01623ae4(&local_c0,local_f8,local_f4);
      local_54 = FUN_0161ccbc;
      local_58 = &local_f8;
      FUN_00664898(&local_48,&DAT_005b22f0,&local_58);
      local_58 = local_48;
      local_54 = (code *)uStack_44;
      uStack_50 = uStack_40;
      FUN_0160f810(&local_38,&local_c0,&local_58);
      iVar8 = local_120;
      if (local_38 != (int ****)&DAT_80000000) goto code_r0x0161b678;
      ppppiVar9 = local_34;
      ppppiVar10 = local_30;
      local_98 = local_2c;
      goto LAB_0161c490;
    }
    *param_1 = 1;
    param_1[1] = local_34;
    param_1[2] = local_30;
    param_1[3] = local_2c;
LAB_0161c564:
    FUN_0161cd14(&local_128);
  }
  return;
code_r0x0161b678:
  local_98 = local_34;
  local_94 = local_30;
  local_90 = local_2c;
  local_a0 = (int ****)0x8000001f;
  local_9c = local_38;
  if (local_120 == local_128) {
    FUN_015f5b48(&local_128);
  }
  puVar7 = (undefined4 *)(local_124 + iVar8 * 0x1c);
  *puVar7 = local_a0;
  puVar7[1] = local_9c;
  puVar7[2] = local_98;
  puVar7[3] = local_94;
  puVar7[4] = local_90;
  puVar7[5] = uStack_8c;
  puVar7[6] = uStack_88;
  local_120 = iVar8 + 1;
  goto LAB_0161b1b4;
}

