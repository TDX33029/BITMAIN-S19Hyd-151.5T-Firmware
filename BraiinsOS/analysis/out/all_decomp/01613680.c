// FUN_01613680 @ 01613680 size=560 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01613680(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_2[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar7 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_01622628(&local_30,uVar7);
  iVar4 = local_28;
  iVar1 = local_2c;
  if (local_30 == -0x7ffffff6) {
    if (local_2c == 0) {
      FUN_01613578((uint)auStack_50 | 4,0,&DAT_018ab9a0,&DAT_018ab990);
    }
    else {
      FUN_01622628(&local_30,uVar7);
      iVar5 = local_28;
      iVar2 = local_2c;
      if (local_30 == -0x7ffffff6) {
        if (local_2c == 0) {
          FUN_01613578(&local_30,1,&DAT_018ab9a0,&DAT_018ab990);
          local_4c = local_30;
          local_48 = local_2c;
          local_44 = local_28;
        }
        else {
          FUN_01622628(&local_30,uVar7);
          iVar6 = local_28;
          iVar3 = local_2c;
          if (local_30 == -0x7ffffff6) {
            if (local_2c == 0) {
              FUN_01613578(&local_30,2,&DAT_018ab9a0,&DAT_018ab990);
              local_4c = local_30;
              local_48 = local_2c;
              local_44 = local_28;
            }
            else {
              FUN_01622628(&local_30,uVar7);
              if (local_30 == -0x7ffffff6) {
                if (local_2c != 0) {
                  param_1[8] = local_28;
                  *param_1 = 0;
                  param_1[1] = iVar1;
                  param_1[2] = iVar4;
                  param_1[3] = iVar2;
                  param_1[4] = iVar5;
                  param_1[5] = iVar3;
                  param_1[6] = iVar6;
                  param_1[7] = local_2c;
                  return;
                }
                FUN_01613578(&local_30,3,&DAT_018ab9a0,&DAT_018ab990);
                local_4c = local_30;
                local_48 = local_2c;
                local_44 = local_28;
              }
              else {
                local_44 = local_28;
                local_48 = local_2c;
                local_4c = local_30;
              }
              if (iVar6 != 0) {
                thunk_FUN_016d3fb4(iVar3);
              }
            }
          }
          else {
            local_4c = local_30;
            local_48 = local_2c;
            local_44 = local_28;
          }
          if (iVar5 != 0) {
            thunk_FUN_016d3fb4(iVar2);
          }
        }
      }
      else {
        local_4c = local_30;
        local_48 = local_2c;
        local_44 = local_28;
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(iVar1);
      }
    }
  }
  else {
    local_4c = local_30;
    local_48 = local_2c;
    local_44 = local_28;
  }
  *param_1 = 1;
  param_1[1] = local_4c;
  param_1[2] = local_48;
  param_1[3] = local_44;
  return;
}

