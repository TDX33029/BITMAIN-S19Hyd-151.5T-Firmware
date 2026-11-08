// FUN_0162f80c @ 0162f80c size=2212 calls_out=4 calls_in=0
// strings: 

void FUN_0162f80c(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  int local_2c;
  int local_28;
  int local_24;
  
  if (param_3 == 0) {
    uVar4 = 2;
    uVar5 = 4;
    uVar3 = 2;
  }
  else {
    param_3 = param_3 << 5;
    uVar5 = 4;
    uVar3 = 2;
    uVar4 = 2;
    do {
      pbVar7 = (byte *)*param_2;
      iVar8 = param_2[1];
      if (iVar8 == 0xe) {
        uVar6 = (uint)*pbVar7;
        iVar8 = 0xe;
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 99) {
LAB_0162ff70:
          FUN_006008c8(&local_2c,pbVar7,iVar8);
          if (local_2c == -0x80000000) {
            if (local_24 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(0,local_24);
            }
            if (local_24 == 0) {
              iVar8 = 0;
              iVar1 = 1;
            }
            else {
              iVar1 = thunk_FUN_016d4a50(local_24);
              iVar8 = local_24;
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_24);
              }
            }
            FUN_016dd1aa(iVar1,local_28,local_24);
            local_2c = iVar8;
            local_28 = iVar1;
          }
          uVar2 = param_2[2];
          *param_1 = 2;
          param_1[1] = uVar2;
          param_1[2] = local_2c;
          param_1[3] = local_28;
          param_1[4] = local_24;
          return;
        }
        uVar6 = (uint)pbVar7[1];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x61) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[2];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x73) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[3];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x65) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[4];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x5f) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[5];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x73) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[6];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x65) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[7];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x6e) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[8];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x73) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[9];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x69) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[10];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x74) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[0xb];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x69) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[0xc];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x76) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[0xd];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x65) goto LAB_0162ff70;
        iVar8 = param_2[5];
        pbVar7 = (byte *)param_2[4];
        if (iVar8 == 4) {
          uVar6 = (uint)*pbVar7;
          iVar8 = 4;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x74) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[1];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x72) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[2];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x75) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[3];
          bVar9 = 0x19 < uVar6 - 0x41;
          uVar4 = 1;
        }
        else {
          if (iVar8 != 5) goto LAB_0162ff3c;
          uVar6 = (uint)*pbVar7;
          iVar8 = 5;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x66) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[1];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x61) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[2];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6c) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[3];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x73) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[4];
          bVar9 = 0x19 < uVar6 - 0x41;
          uVar4 = 0;
        }
LAB_0162fd94:
        if (!bVar9) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x65) {
LAB_0162ff3c:
          FUN_006008c8(&local_2c,pbVar7,iVar8);
          if (local_2c == -0x80000000) {
            if (local_24 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(0,local_24);
            }
            if (local_24 == 0) {
              iVar8 = 0;
              iVar1 = 1;
            }
            else {
              iVar1 = thunk_FUN_016d4a50(local_24);
              iVar8 = local_24;
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_24);
              }
            }
            FUN_016dd1aa(iVar1,local_28,local_24);
            local_28 = iVar1;
            local_2c = iVar8;
          }
          uVar2 = param_2[6];
          *param_1 = 2;
          *(char *)(param_1 + 1) = (char)uVar2;
          *(char *)((int)param_1 + 7) = (char)((uint)uVar2 >> 0x18);
          param_1[2] = local_2c;
          param_1[3] = local_28;
          param_1[4] = local_24;
          *(short *)((int)param_1 + 5) = (short)((uint)uVar2 >> 8);
          return;
        }
      }
      else {
        if (iVar8 == 0xb) {
          uVar6 = (uint)*pbVar7;
          iVar8 = 0xb;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6f) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[1];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6e) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[2];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x65) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[3];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x5f) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[4];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x69) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[5];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6e) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[6];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 100) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[7];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x65) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[8];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x78) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[9];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x65) goto LAB_0162ff70;
          uVar6 = (uint)pbVar7[10];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 100) goto LAB_0162ff70;
          iVar8 = param_2[5];
          pbVar7 = (byte *)param_2[4];
          if (iVar8 == 4) {
            uVar6 = (uint)*pbVar7;
            iVar8 = 4;
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x74) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[1];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x72) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[2];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x75) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[3];
            bVar9 = 0x19 < uVar6 - 0x41;
            uVar3 = 1;
          }
          else {
            if (iVar8 != 5) goto LAB_0162ff3c;
            uVar6 = (uint)*pbVar7;
            iVar8 = 5;
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x66) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[1];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x61) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[2];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x6c) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[3];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x73) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[4];
            bVar9 = 0x19 < uVar6 - 0x41;
            uVar3 = 0;
          }
          goto LAB_0162fd94;
        }
        if (iVar8 != 4) goto LAB_0162ff70;
        uVar6 = (uint)*pbVar7;
        iVar8 = 4;
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x72) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[1];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x65) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[2];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x70) goto LAB_0162ff70;
        uVar6 = (uint)pbVar7[3];
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        if (uVar6 != 0x72) goto LAB_0162ff70;
        iVar8 = param_2[5];
        pbVar7 = (byte *)param_2[4];
        if (iVar8 == 4) {
          uVar6 = (uint)*pbVar7;
          iVar8 = 4;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6c) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[1];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6f) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[2];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6e) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[3];
          uVar5 = 1;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x67) goto LAB_0162ff3c;
        }
        else if (iVar8 == 6) {
          uVar6 = (uint)*pbVar7;
          iVar8 = 6;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 == 0x6d) {
            uVar6 = (uint)pbVar7[1];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x6f) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[2];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x6e) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[3];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 100) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[4];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x61) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[5];
            uVar5 = 3;
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
          }
          else {
            if (uVar6 != 0x73) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[1];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x75) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[2];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x6e) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[3];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 100) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[4];
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
            if (uVar6 != 0x61) goto LAB_0162ff3c;
            uVar6 = (uint)pbVar7[5];
            uVar5 = 2;
            if (uVar6 - 0x41 < 0x1a) {
              uVar6 = uVar6 | 0x20;
            }
          }
          if (uVar6 != 0x79) goto LAB_0162ff3c;
        }
        else {
          if (iVar8 != 5) goto LAB_0162ff3c;
          uVar6 = (uint)*pbVar7;
          iVar8 = 5;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x73) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[1];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x68) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[2];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x6f) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[3];
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x72) goto LAB_0162ff3c;
          uVar6 = (uint)pbVar7[4];
          uVar5 = 0;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar6 != 0x74) goto LAB_0162ff3c;
        }
      }
      param_2 = param_2 + 8;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  *(undefined1 *)((int)param_1 + 6) = uVar5;
  *(undefined1 *)((int)param_1 + 5) = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 7;
  return;
}

