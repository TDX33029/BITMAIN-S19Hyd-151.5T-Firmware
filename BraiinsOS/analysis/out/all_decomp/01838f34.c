// FUN_01838f34 @ 01838f34 size=1904 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01838f34(uint *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [4];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 uStack_39;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined4 local_33;
  undefined1 auStack_2f [11];
  
  uVar3 = local_33;
  auStack_2f._3_4_ = DAT_018ddaf8;
  local_40[0] = *param_2;
  if (param_3 == 1) {
    iVar6 = 0;
    iVar5 = 2;
    local_40[1] = 1;
LAB_01839538:
    FUN_016dd606(local_40 + iVar5,0,0xf - iVar6);
    iVar5 = 0;
  }
  else {
    local_40[1] = param_2[1];
    if (param_3 == 2) {
      iVar5 = 3;
      iVar6 = 1;
      local_40[2] = 1;
      goto LAB_01839538;
    }
    local_40[2] = param_2[2];
    if (param_3 == 3) {
      iVar6 = 2;
      iVar5 = 4;
      local_40[3] = 1;
      goto LAB_01839538;
    }
    local_40[3] = param_2[3];
    if (param_3 == 4) {
      iVar6 = 3;
      iVar5 = 5;
      local_3c = 1;
      goto LAB_01839538;
    }
    local_3c = param_2[4];
    if (param_3 == 5) {
      iVar6 = 4;
      iVar5 = 6;
      local_3b = 1;
      goto LAB_01839538;
    }
    local_3b = param_2[5];
    if (param_3 == 6) {
      iVar6 = 5;
      iVar5 = 7;
      local_3a = 1;
      goto LAB_01839538;
    }
    local_3a = param_2[6];
    if (param_3 == 7) {
      iVar6 = 6;
      iVar5 = 8;
      uStack_39 = 1;
      goto LAB_01839538;
    }
    uStack_39 = param_2[7];
    if (param_3 == 8) {
      iVar6 = 7;
      iVar5 = 9;
      uStack_38 = 1;
      goto LAB_01839538;
    }
    uStack_38 = param_2[8];
    if (param_3 == 9) {
      iVar6 = 8;
      iVar5 = 10;
      uStack_37 = 1;
      goto LAB_01839538;
    }
    uStack_37 = param_2[9];
    if (param_3 == 10) {
      iVar6 = 9;
      iVar5 = 0xb;
      local_36 = 1;
      goto LAB_01839538;
    }
    local_36 = param_2[10];
    if (param_3 == 0xb) {
      iVar6 = 10;
      iVar5 = 0xc;
      local_35 = 1;
      goto LAB_01839538;
    }
    local_35 = param_2[0xb];
    if (param_3 == 0xc) {
      iVar6 = 0xb;
      iVar5 = 0xd;
      local_34 = 1;
      goto LAB_01839538;
    }
    local_34 = param_2[0xc];
    if (param_3 == 0xd) {
      iVar6 = 0xc;
      iVar5 = 0xe;
      local_33 = CONCAT31(local_33._1_3_,1);
      goto LAB_01839538;
    }
    if (param_3 == 0xe) {
      iVar6 = 0xd;
      iVar5 = 0xf;
      local_33._0_2_ = CONCAT11(1,param_2[0xd]);
      goto LAB_01839538;
    }
    local_33._0_2_ = CONCAT11(param_2[0xe],param_2[0xd]);
    if (param_3 == 0xf) {
      iVar6 = 0xe;
      iVar5 = 0x10;
      local_33._3_1_ = SUB41(uVar3,3);
      local_33._0_3_ = CONCAT12(1,(undefined2)local_33);
      goto LAB_01839538;
    }
    iVar5 = param_3 + -0x10;
    param_3 = 0x10;
    local_33._0_3_ = CONCAT12(param_2[0xf],(undefined2)local_33);
    local_33 = CONCAT13(1,(undefined3)local_33);
  }
  uVar3 = local_33;
  if ((&uStack_58 < local_40 && local_40 < &uStack_54) ||
     (&uStack_58 < &local_3c && local_40 < &uStack_58)) goto LAB_018396a0;
  puVar7 = (undefined4 *)(local_40 + 3);
  *param_1 = CONCAT13(local_40[3],CONCAT12(local_40[2],CONCAT11(local_40[1],local_40[0]))) &
             0x3ffffff;
  if ((puVar7 < &uStack_58 && &uStack_5c < puVar7) ||
     (puVar7 < &uStack_5c && &uStack_5c < &uStack_39)) goto LAB_018396a0;
  param_1[2] = (CONCAT13(local_3a,CONCAT12(local_3b,CONCAT11(local_3c,local_40[3]))) & 0xfffffff) >>
               2;
  if ((&local_3a < &uStack_5c && &uStack_60 < &local_3a) ||
     (&uStack_60 < &local_36 && &local_3a < &uStack_60)) goto LAB_018396a0;
  param_1[4] = (CONCAT13(uStack_37,CONCAT12(uStack_38,CONCAT11(uStack_39,local_3a))) & 0x3fffffff)
               >> 4;
  if ((&uStack_64 < &uStack_37 && &uStack_37 < &uStack_60) ||
     (&uStack_64 < &local_33 && &uStack_37 < &uStack_64)) goto LAB_018396a0;
  param_1[6] = CONCAT13(local_34,CONCAT12(local_35,CONCAT11(local_36,uStack_37))) >> 6;
  puVar4 = &uStack_68;
  if ((puVar4 < &local_33 && &local_33 < &uStack_64) || (puVar4 < auStack_2f && &local_33 < puVar4))
  goto LAB_018396a0;
  param_1[8] = local_33;
  if (iVar5 == 0) {
    param_1[9] = 0;
    param_1[7] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
    goto LAB_018394e8;
  }
  local_40[0] = param_2[param_3];
  if (iVar5 == 1) {
    local_40[1] = 1;
    puVar4 = (undefined4 *)&SUB_00000002;
    iVar5 = 0;
LAB_01839574:
    FUN_016dd606((undefined1 *)((int)local_40 + (int)puVar4),0,0xf - iVar5);
  }
  else {
    param_2 = param_2 + param_3;
    bVar8 = iVar5 == 2;
    if (bVar8) {
      iVar5 = 1;
      puVar4 = (undefined4 *)0x3;
      local_40[2] = 1;
    }
    local_40[1] = param_2[1];
    if (bVar8) goto LAB_01839574;
    local_40[2] = param_2[2];
    if (iVar5 == 3) {
      iVar5 = 2;
      puVar4 = (undefined4 *)&DAT_00000004;
      local_40[3] = 1;
      goto LAB_01839574;
    }
    local_40[3] = param_2[3];
    if (iVar5 == 4) {
      iVar5 = 3;
      puVar4 = (undefined4 *)&DAT_00000005;
      local_3c = 1;
      goto LAB_01839574;
    }
    local_3c = param_2[4];
    if (iVar5 == 5) {
      iVar5 = 4;
      puVar4 = (undefined4 *)&DAT_00000006;
      local_3b = 1;
      goto LAB_01839574;
    }
    local_3b = param_2[5];
    if (iVar5 == 6) {
      iVar5 = 5;
      puVar4 = (undefined4 *)&DAT_00000007;
      local_3a = 1;
      goto LAB_01839574;
    }
    local_3a = param_2[6];
    if (iVar5 == 7) {
      iVar5 = 6;
      puVar4 = (undefined4 *)&DAT_00000008;
      uStack_39 = 1;
      goto LAB_01839574;
    }
    uStack_39 = param_2[7];
    if (iVar5 == 8) {
      iVar5 = 7;
      puVar4 = (undefined4 *)&DAT_00000009;
      uStack_38 = 1;
      goto LAB_01839574;
    }
    uStack_38 = param_2[8];
    if (iVar5 == 9) {
      iVar5 = 8;
      puVar4 = (undefined4 *)&DAT_0000000a;
      uStack_37 = 1;
      goto LAB_01839574;
    }
    uStack_37 = param_2[9];
    if (iVar5 == 10) {
      iVar5 = 9;
      puVar4 = (undefined4 *)&DAT_0000000b;
      local_36 = 1;
      goto LAB_01839574;
    }
    local_36 = param_2[10];
    if (iVar5 == 0xb) {
      iVar5 = 10;
      puVar4 = (undefined4 *)&DAT_0000000c;
      local_35 = 1;
      goto LAB_01839574;
    }
    local_35 = param_2[0xb];
    if (iVar5 == 0xc) {
      iVar5 = 0xb;
      puVar4 = (undefined4 *)&DAT_0000000d;
      local_34 = 1;
      goto LAB_01839574;
    }
    bVar8 = iVar5 == 0xd;
    local_34 = param_2[0xc];
    if (bVar8) {
      iVar5 = 0xc;
      param_2 = &DAT_00000001;
      puVar4 = (undefined4 *)&DAT_0000000e;
    }
    if (bVar8) {
      local_33 = CONCAT31(local_33._1_3_,(char)param_2);
      goto LAB_01839574;
    }
    bVar8 = iVar5 == 0xe;
    puVar1 = param_2 + 0xd;
    if (bVar8) {
      iVar5 = 0xd;
      param_2 = &DAT_00000001;
      puVar4 = (undefined4 *)&DAT_0000000f;
    }
    if (bVar8) {
      local_33._0_2_ = CONCAT11((char)param_2,*puVar1);
      goto LAB_01839574;
    }
    local_33._0_2_ = CONCAT11(param_2[0xe],*puVar1);
    if (iVar5 == 0xf) {
      iVar5 = 0xe;
      puVar4 = (undefined4 *)&DAT_00000010;
      local_33._3_1_ = SUB41(uVar3,3);
      local_33._0_3_ = CONCAT12(1,(undefined2)local_33);
      goto LAB_01839574;
    }
    local_33._0_3_ = CONCAT12(param_2[0xf],(undefined2)local_33);
    local_33 = CONCAT13(1,(undefined3)local_33);
  }
  if (&local_3c <= &uStack_44 || &uStack_44 <= local_40) {
    param_1[1] = CONCAT13(local_40[3],CONCAT12(local_40[2],CONCAT11(local_40[1],local_40[0]))) &
                 0x3ffffff;
    if ((puVar7 <= &uStack_48 || &uStack_44 <= puVar7) &&
       (&uStack_39 <= &uStack_48 || &uStack_48 <= puVar7)) {
      param_1[3] = (CONCAT13(local_3a,CONCAT12(local_3b,CONCAT11(local_3c,local_40[3]))) & 0xfffffff
                   ) >> 2;
      if ((&local_3a <= &uStack_4c || &uStack_48 <= &local_3a) &&
         (&local_36 <= &uStack_4c || &uStack_4c <= &local_3a)) {
        param_1[5] = (CONCAT13(uStack_37,CONCAT12(uStack_38,CONCAT11(uStack_39,local_3a))) &
                     0x3fffffff) >> 4;
        if ((((&uStack_37 <= &uStack_50 || &uStack_4c <= &uStack_37) &&
             (&local_33 <= &uStack_50 || &uStack_50 <= &uStack_37)) &&
            (param_1[7] = CONCAT13(local_34,CONCAT12(local_35,CONCAT11(local_36,uStack_37))) >> 6,
            &local_33 <= &uStack_54 || &uStack_50 <= &local_33)) &&
           (auStack_2f <= &uStack_54 || &uStack_54 <= &local_33)) {
          param_1[9] = local_33;
LAB_018394e8:
          if (auStack_2f._3_4_ != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2b78();
          }
          return 0;
        }
      }
    }
  }
LAB_018396a0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0,0x18396a0);
  (*pcVar2)();
}

