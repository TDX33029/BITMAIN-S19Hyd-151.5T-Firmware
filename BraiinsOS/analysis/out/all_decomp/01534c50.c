// FUN_01534c50 @ 01534c50 size=864 calls_out=4 calls_in=2
// strings: 

void FUN_01534c50(undefined1 *param_1,undefined4 param_2,uint *param_3,char *param_4,
                 undefined4 param_5,int *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  uVar6 = param_6[2];
  if (uVar6 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(5,uVar6,uVar6,&DAT_018a79f4);
  }
  uVar5 = uVar6 - 5;
  if (param_3[1] == 0 && (uint)(uVar5 <= *param_3) <= param_3[1]) {
    cVar1 = *param_4;
    *param_1 = 1;
    if (cVar1 != '\0') {
      param_4[1] = '\0';
      param_4[2] = '\0';
      param_4[3] = '\0';
      param_4[4] = '\0';
      param_4[5] = '\0';
      param_4[6] = '\0';
      param_4[7] = '\0';
      param_4[8] = '\0';
      param_4[9] = '\0';
      param_4[10] = '\0';
      param_4[0xb] = '\0';
      param_4[0xc] = '\0';
    }
  }
  else {
    if (*param_4 == '\0') {
      iVar7 = param_6[1];
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      iVar3 = FUN_017235e4(param_2,iVar7 + 5,&local_50,auStack_34,0x1c,0,0,iVar7 + 5,uVar5,0,0,
                           param_5,5);
      if (iVar3 != 1) {
        *param_1 = 1;
        return;
      }
      local_25 = (undefined1)local_40;
      local_29 = (undefined1)local_3c;
      local_2a = local_3c._1_1_;
      local_2b = local_3c._2_1_;
      local_2c = local_3c._3_1_;
      local_2d = (undefined1)local_38;
      local_2e = local_38._1_1_;
      local_2f = local_38._2_1_;
      local_30 = local_38._3_1_;
      local_26 = local_40._1_1_;
      local_27 = local_40._2_1_;
      local_28 = local_40._3_1_;
      if (*param_6 - uVar6 < 0x10) {
        FUN_0154e5f8(param_6,uVar6,0x10,1,1);
        iVar7 = param_6[1];
        uVar6 = param_6[2];
      }
      param_6[2] = uVar6 + 0x10;
      param_1[1] = local_25;
      param_1[2] = local_26;
      param_1[3] = local_27;
      param_1[4] = local_28;
      puVar4 = (undefined4 *)(iVar7 + uVar6);
      *puVar4 = local_50;
      puVar4[3] = local_44;
      puVar4[2] = local_48;
      puVar4[1] = local_4c;
      param_1[5] = local_29;
      *param_1 = 0;
      param_1[6] = local_2a;
      param_1[7] = local_2b;
      param_1[8] = local_2c;
      param_1[9] = local_2d;
      param_1[10] = local_2e;
      param_1[0xb] = local_2f;
      param_1[0xc] = local_30;
      return;
    }
    local_60 = *(undefined4 *)(param_4 + 1);
    local_5c = *(undefined4 *)(param_4 + 5);
    local_58 = *(undefined4 *)(param_4 + 9);
    uVar2 = uVar6;
    if (*param_6 - uVar6 < 0x10) {
      FUN_0154e5f8(param_6,uVar6,0x10,1,1);
      uVar2 = param_6[2];
    }
    param_6[2] = uVar2 + 0x10;
    iVar3 = param_6[1] + 5;
    puVar4 = (undefined4 *)(param_6[1] + uVar2);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    iVar3 = FUN_01723410(param_2,iVar3,&local_50,uVar6 + 0xb,&local_60,0xc,iVar3,uVar5,param_5,5);
    if (iVar3 == 1) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 9) = local_58;
      *(undefined4 *)(param_1 + 5) = local_5c;
      *(undefined4 *)(param_1 + 1) = local_60;
      return;
    }
    *param_1 = 1;
  }
  return;
}

