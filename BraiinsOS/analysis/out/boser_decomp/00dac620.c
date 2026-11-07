// FUN_00dac620 @ 00dac620 size=1472 calls_out=18 calls_in=0
// strings: status | status_since | status_until | precisioniso1+ignoreoffset_houroffset_minuteoffset_second | status

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00dac620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *****pppppuVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  undefined4 *****pppppuVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *****pppppuVar7;
  undefined4 *****local_128;
  undefined4 *****local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [76];
  undefined4 *****local_bc;
  undefined4 *****local_b8;
  undefined4 *****local_b4;
  undefined4 *****local_b0;
  undefined4 *****local_ac;
  undefined4 *****local_a8;
  undefined4 uStack_a4;
  undefined4 ***local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int local_88;
  int local_84;
  undefined1 local_70;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *****local_34;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  undefined4 *****pppppuStack_28;
  
  (**(code **)(param_2[1] + 0xc))(&local_a0,*param_2);
  iVar3 = local_9c;
  pppuVar2 = local_a0;
  if (local_a0 == (undefined4 ***)0x5 && local_9c == 0) {
    *param_1 = 6;
    param_1[1] = 0;
    return;
  }
  FUN_01bed4e2(auStack_108,&local_98,0x48);
  local_120 = local_50;
  uStack_11c = uStack_4c;
  uStack_118 = uStack_48;
  uStack_114 = uStack_44;
  uStack_110 = uStack_40;
  uStack_10c = uStack_3c;
  if (pppuVar2 == (undefined4 ***)0x4 && iVar3 == 0) {
    *param_1 = 5;
    param_1[1] = 0;
    return;
  }
  if (pppuVar2 != (undefined4 ***)0x3 || iVar3 != 0) {
    FUN_01bed4e2(&local_98,auStack_108,0x48);
    local_50 = local_120;
    uStack_4c = uStack_11c;
    uStack_48 = uStack_118;
    uStack_44 = uStack_114;
    uStack_40 = uStack_110;
    uStack_3c = uStack_10c;
    local_2c = (undefined4 *****)FUN_01a755dc;
    local_30 = (undefined4 *****)&local_a0;
    FUN_00664898(&local_b0,&DAT_005a3c31,&local_30);
    local_30 = local_b0;
    local_2c = local_ac;
    pppppuStack_28 = local_a8;
    FUN_00768b9c(&local_b0,&local_30);
    pppppuVar7 = local_ac;
    pppppuVar4 = local_b0;
    FUN_005f6588(&local_a0);
    goto LAB_00dac8f8;
  }
  FUN_01bed4e2(&local_a0,auStack_108,0x48);
  local_ac = (undefined4 *****)thunk_FUN_01be5118(0x80);
  if (local_ac == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_34 = &local_b0;
  local_a8 = (undefined4 *****)0x0;
  local_b0 = (undefined4 *****)&DAT_00000080;
  FUN_01ac6cbc(local_34,"{",1);
  FUN_012650dc(&local_30,local_34,"status",6);
  if ((char)local_30 == '\x04') {
    FUN_01ac6cbc(local_34,":",1);
    if (!(local_a0 == (undefined4 ***)0x2 && local_9c == 0)) {
      FUN_01ac6cbc(local_34,"{",1);
      FUN_012650dc(&local_30,local_34,"status_since",0xc);
      if ((char)local_30 == '\x04') {
        FUN_01ac6cbc(local_34,":",1);
        if (((uint)local_a0 & 1) == 0) {
          FUN_01ac6cbc(local_34,&DAT_0056d030,4);
        }
        else {
          pppppuVar4 = (undefined4 *****)FUN_00d580bc(local_98,uStack_94,local_90,&local_34);
          if (pppppuVar4 != (undefined4 *****)0x0) goto LAB_00dac888;
        }
        FUN_01ac6cbc(local_34,",",1);
        FUN_012650dc(&local_30,local_34,"status_until",0xc);
        if ((char)local_30 == '\x04') {
          FUN_01ac6cbc(local_34,":",1);
          if (local_88 == 3 && local_84 == 0) {
            uVar6 = 4;
            pcVar5 = &DAT_0056d030;
          }
          else {
            FUN_01ac6cbc(local_34,"{",1);
            FUN_012650dc(&local_30,local_34,
                         "precisioniso1+ignoreoffset_houroffset_minuteoffset_second",9);
            if ((char)local_30 != '\x04') {
              pppppuVar4 = (undefined4 *****)FUN_01966f50(local_30,local_2c);
              goto LAB_00dac888;
            }
            FUN_01ac6cbc(local_34,":",1);
            if (local_88 == 2 && local_84 == 0) {
              FUN_01ac6cbc(local_34,&DAT_0056d030,4);
            }
            else {
              pppppuVar4 = (undefined4 *****)FUN_00ea4770(&local_88,&local_34);
              if (pppppuVar4 != (undefined4 *****)0x0) goto LAB_00dac888;
            }
            uVar6 = 1;
            pcVar5 = "}";
          }
          FUN_01ac6cbc(local_34,pcVar5,uVar6);
          FUN_01ac6cbc(local_34,",",1);
          FUN_012650dc(&local_30,local_34,"status",6);
          if ((char)local_30 == '\x04') {
            FUN_01ac6cbc(local_34,":",1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(local_70) {
            case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            default:
              FUN_01ac6cbc(local_34,&DAT_0056d030,4);
              uVar6 = 1;
              pcVar5 = "}";
            }
            goto LAB_00dac758;
          }
          pppppuVar4 = (undefined4 *****)FUN_01966f50(local_30,local_2c);
        }
        else {
          pppppuVar4 = (undefined4 *****)FUN_01966f50(local_30,local_2c);
        }
      }
      else {
        pppppuVar4 = (undefined4 *****)FUN_01966f50(local_30,local_2c);
      }
      goto LAB_00dac888;
    }
    uVar6 = 4;
    pcVar5 = &DAT_0056d030;
LAB_00dac758:
    FUN_01ac6cbc(local_34,pcVar5,uVar6);
    FUN_01ac6cbc(local_34,"}",1);
    pppppuVar4 = local_ac;
    if (local_b0 != (undefined4 *****)&DAT_80000000) {
      local_b4 = local_a8;
      local_b8 = local_ac;
      local_bc = local_b0;
      if (local_b0 == local_a8) {
        FUN_0132b898(&local_bc,local_b0,1,1,1);
      }
      *(undefined1 *)((int)local_b8 + (int)local_b4) = 10;
      local_b4 = (undefined4 *****)((int)local_b4 + 1);
      FUN_01283524(&local_b0,&local_bc);
      pppppuVar7 = local_a8;
      pppppuVar4 = local_ac;
      pppppuVar1 = local_b0;
      FUN_00d4fd6c(&local_a0);
      if (pppppuVar1 != (undefined4 *****)0x0) {
        param_1[1] = 0;
        param_1[2] = pppppuVar1;
        param_1[3] = pppppuVar4;
        param_1[4] = pppppuVar7;
        param_1[5] = uStack_a4;
        *param_1 = 3;
        return;
      }
      goto LAB_00dac8f8;
    }
  }
  else {
    pppppuVar4 = (undefined4 *****)FUN_01966f50(local_30,local_2c);
LAB_00dac888:
    FUN_019bb7e0(local_b0,local_ac);
  }
  local_2c = (undefined4 *****)&LAB_019674bc;
  local_30 = &local_34;
  local_34 = pppppuVar4;
  FUN_00664898(&local_b0,&DAT_005a1e79,&local_30);
  local_30 = local_b0;
  local_2c = local_ac;
  pppppuStack_28 = local_a8;
  FUN_00768b9c(&local_b0,&local_30);
  FUN_012c696c(local_34);
  pppppuVar7 = local_ac;
  pppppuVar4 = local_b0;
  FUN_00d4fd6c(&local_a0);
LAB_00dac8f8:
  local_128 = pppppuVar4;
  local_124 = pppppuVar7;
  uVar6 = FUN_014333d0(&local_128);
  uVar6 = FUN_00715ebc(uVar6,&DAT_01cf5e1c);
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = uVar6;
  param_1[3] = &DAT_01c07620;
  return;
}

