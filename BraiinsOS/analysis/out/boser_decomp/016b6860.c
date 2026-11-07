// FUN_016b6860 @ 016b6860 size=596 calls_out=0 calls_in=1
// strings: max_match is DEAD; but min_match is not | min_match is DEAD; but max_match is not | max_accel is DEAD; but min_accel is notmin_accel is DEAD; but max_accel is not | min_match should not be greater than max_matchmax_start is DEAD; but min_start is notmin_start is DEAD; but max_start is not | min_accel should not be greater than max_accel | min_start should not be greater than max_start

void FUN_016b6860(undefined4 *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      pcVar1 = "min_match is DEAD, but max_match is not";
      goto LAB_016b6890;
    }
    uVar4 = 0;
  }
  else if (uVar4 == 0) {
    pcVar1 = "max_match is DEAD, but min_match is not";
LAB_016b6890:
    *param_1 = 0;
    param_1[1] = pcVar1;
    param_1[2] = 0x27;
    return;
  }
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  if (uVar5 == 0) {
    if (uVar6 == 0) {
      uVar6 = 0;
      goto LAB_016b68e8;
    }
    pcVar1 = "min_accel is DEAD, but max_accel is not";
  }
  else if (uVar6 == 0) {
    pcVar1 = "max_accel is DEAD, but min_accel is notmin_accel is DEAD, but max_accel is not";
  }
  else {
LAB_016b68e8:
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    if (uVar7 == 0) {
      if (uVar8 == 0) {
        uVar8 = 0;
        goto LAB_016b6928;
      }
      pcVar1 = "min_start is DEAD, but max_start is not";
    }
    else {
      if (uVar8 != 0) {
LAB_016b6928:
        if (uVar4 < uVar2) {
          pcVar1 = 
          "min_match should not be greater than max_matchmax_start is DEAD, but min_start is notmin_start is DEAD, but max_start is not"
          ;
        }
        else if (uVar6 < uVar5) {
          pcVar1 = "min_accel should not be greater than max_accel";
        }
        else {
          if (uVar7 <= uVar8) {
            uVar9 = param_2[1];
            if (uVar2 - 1 < uVar9) {
              pcVar1 = "quit_id should not be greater than min_match";
            }
            else if (uVar5 - 1 < uVar9) {
              pcVar1 = "quit_id should not be greater than min_accel";
            }
            else {
              if (uVar9 <= uVar7 - 1) {
                if (uVar2 == 0) {
                  if ((uVar5 <= uVar7) || (uVar7 == 0)) goto LAB_016b6a4c;
LAB_016b69fc:
                  pcVar1 = "min_accel should not be greater than min_start";
                }
                else if (uVar5 == 0) {
                  if ((uVar7 == 0) == uVar7 < uVar2) goto LAB_016b6a4c;
LAB_016b6a38:
                  pcVar1 = "min_match should not be greater than min_start";
                }
                else {
                  if (uVar2 <= uVar5) {
                    if (uVar7 != 0) {
                      if (uVar7 < uVar2) goto LAB_016b6a38;
                      if (uVar7 < uVar5) goto LAB_016b69fc;
                    }
LAB_016b6a4c:
                    uVar2 = *param_2;
                    if (uVar2 < uVar9) {
                      uVar3 = 0x26;
                      pcVar1 = "quit_id should not be greater than max";
                    }
                    else {
                      if (uVar2 < uVar4) {
                        pcVar1 = "max_match should not be greater than max";
                      }
                      else if (uVar2 < uVar6) {
                        pcVar1 = "max_accel should not be greater than max";
                      }
                      else {
                        if (uVar8 <= uVar2) {
                          *param_1 = 10;
                          return;
                        }
                        pcVar1 = 
                        "max_start should not be greater than maxmax_accel should not be greater than max"
                        ;
                      }
                      uVar3 = 0x28;
                    }
                    goto LAB_016b6964;
                  }
                  pcVar1 = 
                  "min_match should not be greater than min_accelquit_id should not be greater than min_startquit_id should not be greater than min_accel"
                  ;
                }
                goto LAB_016b6960;
              }
              pcVar1 = 
              "quit_id should not be greater than min_startquit_id should not be greater than min_accel"
              ;
            }
            uVar3 = 0x2c;
            goto LAB_016b6964;
          }
          pcVar1 = "min_start should not be greater than max_start";
        }
LAB_016b6960:
        uVar3 = 0x2e;
        goto LAB_016b6964;
      }
      pcVar1 = "max_start is DEAD, but min_start is notmin_start is DEAD, but max_start is not";
    }
  }
  uVar3 = 0x27;
LAB_016b6964:
  *param_1 = 0;
  param_1[1] = pcVar1;
  param_1[2] = uVar3;
  return;
}

