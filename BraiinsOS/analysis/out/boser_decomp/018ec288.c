// FUN_018ec288 @ 018ec288 size=576 calls_out=7 calls_in=1
// strings: 

void FUN_018ec288(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  char local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined2 local_7c;
  undefined2 uStack_7a;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined1 local_27;
  
  FUN_018ed6b4(&local_80);
  uVar7 = local_74;
  if (CONCAT13(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))) == 1) {
    param_1[1] = CONCAT22(uStack_7a,local_7c);
    param_1[2] = CONCAT22(uStack_76,local_78);
    param_1[3] = local_74;
  }
  else {
    uVar2 = CONCAT22(uStack_7a,local_7c);
    uVar3 = CONCAT22(uStack_76,local_78);
    FUN_0190b98c(&local_80,param_2);
    uVar6 = local_7c;
    if (local_80 == '\x18') {
      uVar1 = CONCAT11(uStack_7d,uStack_7e);
      FUN_0190d438(&local_80,param_2);
      uVar5 = uStack_7e;
      uVar4 = uStack_7f;
      if (local_80 == '\x18') {
        uVar9 = *(uint *)(param_2 + 4);
        uVar10 = *(uint *)(param_2 + 8);
        if (uVar10 < uVar9) {
          FUN_018e65a4(&local_80,param_2);
          uVar8 = CONCAT22(uStack_7a,local_7c);
          uVar11 = CONCAT22(uStack_76,local_78);
          if (CONCAT13(uStack_7d,CONCAT12(uStack_7e,CONCAT11(uStack_7f,local_80))) != 0) {
            param_1[1] = uVar8;
            param_1[2] = uVar11;
            *param_1 = 0x80000000;
            param_1[3] = local_74;
            return;
          }
          uVar9 = *(uint *)(param_2 + 4);
          uVar10 = *(uint *)(param_2 + 8);
        }
        else {
          uVar11 = 4;
          uVar8 = 0;
          local_74 = 0;
        }
        if (uVar10 < uVar9) {
          local_78 = (undefined2)local_74;
          uStack_76 = (undefined2)((uint)local_74 >> 0x10);
          local_74 = 9;
          local_80 = (char)uVar8;
          uStack_7f = (undefined1)((uint)uVar8 >> 8);
          uStack_7e = (undefined1)((uint)uVar8 >> 0x10);
          uStack_7d = (undefined1)((uint)uVar8 >> 0x18);
          local_7c = (undefined2)uVar11;
          uStack_7a = (undefined2)((uint)uVar11 >> 0x10);
          FUN_01bed93e(&local_6c,0,0x20);
          uStack_44 = uVar7;
          uStack_40 = local_70;
          local_3c = local_6c;
          uStack_38 = uStack_68;
          uStack_34 = uStack_64;
          uStack_30 = uStack_60;
          uStack_2c = uStack_5c;
          *(undefined1 *)(param_1 + 1) = 0xf;
          *param_1 = 0x80000000;
          param_1[2] = &DAT_00520fb0;
          param_1[3] = 0x12;
          local_27 = uVar5;
          local_28 = uVar4;
          FUN_018e3950(&local_80);
          return;
        }
        param_1[2] = local_74;
        *param_1 = uVar8;
        param_1[1] = uVar11;
        param_1[3] = 9;
        *(undefined2 *)((int)param_1 + 0x12) = uVar6;
        *(undefined2 *)(param_1 + 4) = uVar1;
        FUN_01bed93e(param_1 + 5,0,0x20);
        param_1[0xd] = uVar2;
        param_1[0xe] = uVar3;
        param_1[0xf] = uVar7;
        param_1[0x10] = local_70;
        param_1[0x11] = local_6c;
        param_1[0x12] = uStack_68;
        param_1[0x13] = uStack_64;
        param_1[0x14] = uStack_60;
        param_1[0x15] = uStack_5c;
        *(undefined1 *)((int)param_1 + 0x59) = uVar5;
        *(undefined1 *)(param_1 + 0x16) = uVar4;
        return;
      }
      FUN_01bed4e2((int)param_1 + 7,(uint)&local_80 | 3,9);
      *(undefined1 *)((int)param_1 + 6) = uStack_7e;
      *(undefined1 *)((int)param_1 + 5) = uStack_7f;
      *(char *)(param_1 + 1) = local_80;
    }
    else {
      *(uint *)((int)param_1 + 10) = CONCAT22(local_78,uStack_7a);
      *(undefined2 *)((int)param_1 + 0xe) = uStack_76;
      *(uint *)((int)param_1 + 6) = CONCAT22(local_7c,CONCAT11(uStack_7d,uStack_7e));
      *(undefined1 *)((int)param_1 + 5) = uStack_7f;
      *(char *)(param_1 + 1) = local_80;
    }
  }
  *param_1 = 0x80000000;
  return;
}

