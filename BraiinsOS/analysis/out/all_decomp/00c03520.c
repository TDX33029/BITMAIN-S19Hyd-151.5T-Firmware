// FUN_00c03520 @ 00c03520 size=3016 calls_out=17 calls_in=1
// strings: Power | stage | origin | created_on

int FUN_00c03520(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  
  piVar6 = (int *)*param_2;
  iVar2 = piVar6[2];
  if (*piVar6 == iVar2) {
    FUN_00d653ec(piVar6,iVar2,1,1,1);
    iVar2 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
  piVar6[2] = iVar2 + 1;
  local_40 = CONCAT22(local_40._2_2_,0x200);
  local_3c = param_2;
  FUN_00cd2b24(&local_30,*param_2,&DAT_00354559,0xe);
  if ((char)local_30 == '\x04') {
    piVar6 = (int *)*param_2;
    iVar2 = piVar6[2];
    if (*piVar6 == iVar2) {
      FUN_00d653ec(piVar6,iVar2,1,1,1);
      iVar2 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
    uVar3 = param_1[0x28];
    uVar4 = param_1[0x29];
    piVar6[2] = piVar6[2] + 1;
    piVar6 = (int *)*param_2;
    if (uVar3 == 5 && uVar4 == 0) {
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
      piVar6[2] = iVar2 + 1;
      FUN_00cd2b24(&local_30,piVar6,"Power",5);
      if ((char)local_30 != '\x04') goto LAB_00c03d90;
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      uVar8 = *(undefined8 *)(param_1 + 0x2a);
      *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
      piVar6[2] = iVar2 + 1;
      FUN_00d44a64((int)uVar8,piVar6);
    }
    else {
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
      piVar6[2] = iVar2 + 1;
      FUN_00cd2b24(&local_30,piVar6,&DAT_00569eb0,8);
      if ((char)local_30 != '\x04') goto LAB_00c03d90;
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
      piVar6[2] = iVar2 + 1;
      iVar2 = FUN_00d42ef8(param_1 + 0x28,piVar6);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    iVar2 = piVar6[2];
    if (*piVar6 == iVar2) {
      FUN_00d653ec(piVar6,iVar2,1,1,1);
      iVar2 = piVar6[2];
    }
    uVar3 = param_1[0x33];
    uVar4 = param_1[0x34];
    *(undefined1 *)(piVar6[1] + iVar2) = 0x7d;
    piVar6[2] = iVar2 + 1;
    piVar6 = (int *)*param_2;
    iVar2 = piVar6[2];
    if (*piVar6 == iVar2) {
      FUN_00d653ec(piVar6,iVar2,1,1,1);
      iVar2 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar2) = 0x2c;
    piVar6[2] = piVar6[2] + 1;
    local_40._0_2_ = CONCAT11(2,(undefined1)local_40);
    FUN_00cd2b24(&local_30,*param_2,&DAT_00354567,6);
    if ((char)local_30 == '\x04') {
      piVar6 = (int *)*param_2;
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
      piVar6[2] = piVar6[2] + 1;
      piVar6 = (int *)*param_2;
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x5b;
      iVar2 = piVar6[2] + 1;
      piVar6[2] = iVar2;
      if (uVar4 == 0) {
        if (*piVar6 == iVar2) {
          FUN_00d653ec(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
      }
      else {
        iVar2 = FUN_00c022b0(uVar3,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar5 = uVar4 * 0x20;
        while( true ) {
          iVar5 = iVar5 + -0x20;
          uVar3 = uVar3 + 0x20;
          piVar6 = (int *)*param_2;
          iVar2 = piVar6[2];
          if (iVar5 == 0) break;
          if (*piVar6 == iVar2) {
            FUN_00d653ec(piVar6,iVar2,1,1,1);
            iVar2 = piVar6[2];
          }
          *(undefined1 *)(piVar6[1] + iVar2) = 0x2c;
          piVar6[2] = piVar6[2] + 1;
          iVar2 = FUN_00c022b0(uVar3,param_2);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        if (*piVar6 == iVar2) {
          FUN_00d653ec(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x5d;
      piVar6[2] = piVar6[2] + 1;
      piVar6 = (int *)*param_2;
      iVar2 = piVar6[2];
      if (*piVar6 == iVar2) {
        FUN_00d653ec(piVar6,iVar2,1,1,1);
        iVar2 = piVar6[2];
      }
      *(undefined1 *)(piVar6[1] + iVar2) = 0x2c;
      piVar6[2] = piVar6[2] + 1;
      local_40._0_2_ = CONCAT11(2,(undefined1)local_40);
      FUN_00cd2b24(&local_30,*param_2,"stage",5);
      if ((char)local_30 == '\x04') {
        piVar6 = (int *)*param_2;
        iVar2 = piVar6[2];
        if (*piVar6 == iVar2) {
          FUN_00d653ec(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
        uVar4 = *param_1;
        uVar3 = param_1[1];
        *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
        piVar6[2] = piVar6[2] + 1;
        iVar2 = 0;
        if ((uint)(uVar4 < 2) <= -uVar3) {
          iVar2 = uVar4 - 1;
        }
        local_34 = param_2;
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            piVar6 = (int *)*param_2;
            iVar2 = piVar6[2];
            if (*piVar6 == iVar2) {
              FUN_00d653ec(piVar6,iVar2,1,1,1);
              iVar2 = piVar6[2];
            }
            *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
            piVar6[2] = iVar2 + 1;
            FUN_00cd2b24(&local_30,piVar6,&DAT_0035781e,2);
            if ((char)local_30 != '\x04') goto LAB_00c03f24;
            iVar2 = piVar6[2];
            if (*piVar6 == iVar2) {
              FUN_00d653ec(piVar6,iVar2,1,1,1);
              iVar2 = piVar6[2];
            }
            piVar7 = (int *)*param_2;
            *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
            piVar6[2] = iVar2 + 1;
            iVar2 = piVar7[2];
            if (*piVar7 == iVar2) {
              FUN_00d653ec(piVar7,iVar2,1,1,1);
              iVar2 = piVar7[2];
            }
            *(undefined1 *)(piVar7[1] + iVar2) = 0x7b;
            piVar7[2] = iVar2 + 1;
            local_38 = CONCAT22(local_38._2_2_,0x100);
            iVar2 = FUN_00cd3628(&local_38,&DAT_00357820,0x13,param_1 + 2);
            if (iVar2 != 0) {
              return iVar2;
            }
            if ((char)local_38 == '\x01') goto LAB_00c03f38;
            iVar2 = FUN_00cd440c(&local_38,"origin",param_1 + 0x18);
            puVar1 = local_34;
          }
          else {
            piVar6 = (int *)*param_2;
            iVar2 = piVar6[2];
            if (*piVar6 == iVar2) {
              FUN_00d653ec(piVar6,iVar2,1,1,1);
              iVar2 = piVar6[2];
            }
            *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
            piVar6[2] = iVar2 + 1;
            FUN_00cd2b24(&local_30,piVar6,&DAT_00357833,2);
            if ((char)local_30 != '\x04') {
LAB_00c03f24:
              iVar2 = FUN_0157c4a0(local_30,local_2c);
              return iVar2;
            }
            iVar2 = piVar6[2];
            if (*piVar6 == iVar2) {
              FUN_00d653ec(piVar6,iVar2,1,1,1);
              iVar2 = piVar6[2];
            }
            piVar7 = (int *)*param_2;
            *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
            piVar6[2] = iVar2 + 1;
            iVar2 = piVar7[2];
            if (*piVar7 == iVar2) {
              FUN_00d653ec(piVar7,iVar2,1,1,1);
              iVar2 = piVar7[2];
            }
            *(undefined1 *)(piVar7[1] + iVar2) = 0x7b;
            piVar7[2] = iVar2 + 1;
            local_38 = CONCAT22(local_38._2_2_,0x100);
            iVar2 = FUN_00cd3628(&local_38,&DAT_00357820,0x13,param_1 + 2);
            if (iVar2 != 0) {
              return iVar2;
            }
            if ((char)local_38 == '\x01') goto LAB_00c03f38;
            iVar2 = FUN_00cd4ab4(&local_38,&DAT_0056aa60,param_1[0x19],param_1[0x1a]);
            puVar1 = local_34;
          }
          if (iVar2 != 0) {
            return iVar2;
          }
          local_34 = puVar1;
          if ((local_38 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf48);
          }
          if ((local_38 & 0xff00) != 0) {
            piVar6 = (int *)*puVar1;
            iVar2 = piVar6[2];
            if (*piVar6 == iVar2) {
              FUN_00d653ec(piVar6,iVar2,1,1,1);
              iVar2 = piVar6[2];
            }
            *(undefined1 *)(piVar6[1] + iVar2) = 0x7d;
            piVar6[2] = iVar2 + 1;
          }
          piVar6 = (int *)*puVar1;
          iVar2 = piVar6[2];
          if (*piVar6 == iVar2) {
            FUN_00d653ec(piVar6,iVar2,1,1,1);
            iVar2 = piVar6[2];
          }
          *(undefined1 *)(piVar6[1] + iVar2) = 0x7d;
          piVar6[2] = iVar2 + 1;
LAB_00c03d34:
          iVar2 = FUN_00cd3370(&local_40,"created_on",10,param_1 + 0x2e);
          if (((iVar2 == 0) && (iVar2 = 0, (local_40 & 0xff00) != 0)) && ((local_40 & 1) == 0)) {
            FUN_00cde0e0(*local_3c,"}",1);
            return 0;
          }
          return iVar2;
        }
        piVar6 = (int *)*param_2;
        iVar2 = piVar6[2];
        if (*piVar6 == iVar2) {
          FUN_00d653ec(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
        *(undefined1 *)(piVar6[1] + iVar2) = 0x7b;
        piVar6[2] = iVar2 + 1;
        FUN_00cd2b24(&local_30,piVar6,&DAT_003577e6,2);
        if ((char)local_30 != '\x04') goto LAB_00c03f24;
        iVar2 = piVar6[2];
        if (*piVar6 == iVar2) {
          FUN_00d653ec(piVar6,iVar2,1,1,1);
          iVar2 = piVar6[2];
        }
        piVar7 = (int *)*param_2;
        *(undefined1 *)(piVar6[1] + iVar2) = 0x3a;
        piVar6[2] = iVar2 + 1;
        iVar2 = piVar7[2];
        if (*piVar7 == iVar2) {
          FUN_00d653ec(piVar7,iVar2,1,1,1);
          iVar2 = piVar7[2];
        }
        *(undefined1 *)(piVar7[1] + iVar2) = 0x7b;
        piVar7[2] = iVar2 + 1;
        local_38 = CONCAT22(local_38._2_2_,0x100);
        iVar2 = FUN_00cd3628(&local_38,&DAT_003577e8,0xf,param_1 + 4);
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((char)local_38 != '\x01') {
          iVar2 = FUN_00cd4d78((int)*(undefined8 *)(param_1 + 0x24),&local_38,&DAT_003577f7,0xd);
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((char)local_38 != '\x01') {
            uVar8 = FUN_00cd4d78((int)*(undefined8 *)(param_1 + 0x26),&local_38,&DAT_00357804,0xb);
            if ((int)uVar8 != 0) {
              return (int)uVar8;
            }
            iVar2 = FUN_00d59cd8((int)*(undefined8 *)(param_1 + 2),&local_38,
                                 (int)((ulonglong)uVar8 >> 0x20),uVar4,uVar3);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar8 = FUN_00d59ea0(&local_38,param_1 + 0x1a);
            if ((int)uVar8 != 0) {
              return (int)uVar8;
            }
            iVar2 = FUN_00d59ee4(&local_38,(int)((ulonglong)uVar8 >> 0x20),param_1[0x20],
                                 param_1[0x21],param_1[0x22]);
            if (iVar2 != 0) {
              return iVar2;
            }
            local_30 = local_38;
            local_2c = local_34;
            FUN_00d5a03c(&local_30);
            goto LAB_00c03d34;
          }
        }
LAB_00c03f38:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01878150);
      }
    }
  }
LAB_00c03d90:
  iVar2 = FUN_0157c4a0(local_30,local_2c);
  return iVar2;
}

