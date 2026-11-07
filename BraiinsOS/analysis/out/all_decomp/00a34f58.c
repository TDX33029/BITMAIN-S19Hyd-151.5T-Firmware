// FUN_00a34f58 @ 00a34f58 size=1188 calls_out=15 calls_in=1
// strings: Stream keep alive control field 'period' is 'None' (server bug?) | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_00a34f58(undefined4 ****param_1)

{
  uint uVar1;
  undefined4 ******ppppppuVar2;
  undefined4 ******ppppppuVar3;
  undefined4 *****pppppuVar4;
  undefined4 *****pppppuVar5;
  undefined4 *****pppppuVar6;
  undefined4 *****pppppuVar7;
  undefined4 ***pppuVar8;
  undefined4 *****pppppuVar9;
  int iVar10;
  uint uVar11;
  undefined4 *****pppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 *****pppppuVar14;
  undefined8 uVar15;
  undefined4 ****local_80;
  undefined4 *****local_7c;
  undefined4 ****local_78;
  undefined4 *****local_74;
  undefined4 ******ppppppuStack_70;
  undefined4 *****local_6c;
  undefined4 ****local_64;
  undefined4 *****local_60;
  undefined4 *****local_5c;
  undefined4 *****local_58;
  undefined4 *****local_54;
  undefined4 ******local_50;
  undefined4 *****local_4c;
  undefined4 *****local_44;
  undefined1 *local_40;
  undefined4 ****local_38;
  undefined4 local_34;
  undefined4 *****local_2c;
  code *local_28;
  
  FUN_010e7c10(&local_58);
  pppppuVar6 = local_54;
  pppppuVar5 = local_58;
  if (local_58 == (undefined4 *****)&DAT_80000000) {
    local_54 = local_50;
    local_50 = (undefined4 ******)local_4c;
    local_58 = pppppuVar6;
    pppuVar8 = (undefined4 ***)FUN_00ac0cac(&local_58);
    *param_1 = pppuVar8;
    param_1[2] = (undefined4 ***)&DAT_3b9aca00;
    return;
  }
  local_7c = local_50;
  local_74 = (undefined4 *****)0x0;
  local_80 = local_54;
  local_78 = (undefined4 ****)&SUB_00000002;
  pppppuVar12 = (undefined4 *****)param_1;
  local_64 = &local_80;
  do {
    pppppuVar4 = local_7c;
    pppppuVar9 = (undefined4 *****)local_78;
    ppppppuVar2 = (undefined4 ******)local_74;
    ppppppuVar3 = ppppppuStack_70;
    pppppuVar14 = local_6c;
    if (local_7c == (undefined4 *****)0x0) goto joined_r0x00a3511c;
    FUN_010e45d8(&local_58,&local_80);
    if (local_58 == (undefined4 *****)&DAT_00000001) {
      pppppuVar9 = local_54;
      goto LAB_00a35160;
    }
    local_60 = local_50;
    local_5c = local_4c;
    if (local_4c != (undefined4 *****)0x0) {
      local_58 = &local_60;
      local_54 = (undefined4 *****)FUN_00fac4cc;
      FUN_00600d2c(&local_44,&DAT_005918e8,&local_58);
      pppppuVar9 = (undefined4 *****)FUN_010e9978(&local_44);
LAB_00a3515c:
      goto LAB_00a35160;
    }
    local_34 = 0;
    local_38 = (undefined4 ****)((uint)local_50 & 7);
    uVar11 = ((uint)local_50 ^ 4) & 7;
    if ((0xf3U >> uVar11 & 1) == 0) {
      local_2c = &local_38;
      local_28 = FUN_00fac4cc;
      FUN_00600d2c(&local_58,&DAT_005976bb,&local_2c);
      pppppuVar9 = (undefined4 *****)FUN_010e9978(&local_58);
      goto LAB_00a3515c;
    }
    uVar1 = (uint)local_50 >> 3;
    if (uVar1 == 0) {
      pppppuVar9 = (undefined4 *****)FUN_010e98c8(&DAT_00387f91,0x14);
      goto LAB_00a3515c;
    }
    if (uVar1 == 1) {
      if (local_78 == (undefined4 ****)&SUB_00000002 && local_74 == (undefined4 *****)0x0) {
        local_74 = (undefined4 *****)0x0;
        local_78 = (undefined4 ****)0x0;
      }
      pppppuVar9 = (undefined4 *****)FUN_010e1de8((&DAT_0056a9c8)[uVar11],&local_78,&local_64);
      ppppuVar13 = (undefined4 ****)0x0;
      if (pppppuVar9 != (undefined4 *****)0x0) {
        pppuVar8 = pppppuVar9[2];
        if ((undefined4 ****)pppuVar8 == *pppppuVar9) {
          FUN_012d2740(pppppuVar9);
        }
        pppppuVar9[2] = (undefined4 ****)((int)pppuVar8 + 1);
        pppuVar8 = pppppuVar9[1] + (int)pppuVar8 * 4;
        *pppuVar8 = (undefined4 **)&DAT_00387f7b;
        pppuVar8[1] = (undefined4 **)0x16;
        pppuVar8[2] = (undefined4 **)&DAT_00413011;
        pppuVar8[3] = (undefined4 **)0x6;
        goto LAB_00a35160;
      }
    }
    else {
      ppppuVar13 = (undefined4 ****)FUN_010e47f0((&DAT_0056a9c8)[uVar11],uVar1,&local_64,100);
    }
    pppppuVar12 = (undefined4 *****)0x0;
    pppppuVar9 = (undefined4 *****)ppppuVar13;
    if (ppppuVar13 != (undefined4 ****)0x0) {
LAB_00a35160:
      local_50 = (undefined4 ******)0x0;
      local_54 = (undefined4 *****)0x1;
      local_58 = (undefined4 *****)0x0;
      iVar10 = FUN_012d25c8(pppppuVar9,&local_58);
      ppppppuVar2 = local_50;
      pppppuVar7 = local_54;
      pppppuVar12 = local_58;
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_44,
                     &DAT_018859d8,&DAT_018af130);
      }
      pppppuVar14 = &local_54;
      if (((uint)pppppuVar9[3] & 0x7fffffff) == 0) {
        pppuVar8 = *pppppuVar9;
      }
      else {
        thunk_FUN_016d3fb4(pppppuVar9[4]);
        pppuVar8 = *pppppuVar9;
      }
      if (pppuVar8 != (undefined4 ***)0x0) {
        thunk_FUN_016d3fb4(pppppuVar9[1]);
      }
      thunk_FUN_016d3fb4(pppppuVar9);
      local_78 = pppppuVar12;
      local_74 = pppppuVar7;
      ppppppuStack_70 = ppppppuVar2;
      local_50 = (undefined4 ******)0x0;
      local_54 = (undefined4 *****)&DAT_00000001;
      local_58 = (undefined4 *****)0x0;
      if (pppppuVar12 == (undefined4 *****)&DAT_80000000) {
        local_2c = &local_74;
        local_44 = &local_2c;
        local_40 = &LAB_008b9b38;
        iVar10 = FUN_00fa948c(&local_58,&DAT_018859c0,&DAT_00590e71,&local_44);
      }
      else {
        local_2c = &local_78;
        local_40 = &LAB_01110b14;
        local_44 = &local_2c;
        iVar10 = FUN_00fa948c(&local_58,&DAT_018859c0,&DAT_00578991,&local_44);
      }
      ppppppuVar2 = local_50;
      pppppuVar9 = local_54;
      pppppuVar12 = local_58;
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_44,
                     &DAT_018859d8,&DAT_018af130);
      }
      ppppppuVar3 = &local_50;
      if (((uint)local_78 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_74);
      }
joined_r0x00a3511c:
      if (pppppuVar5 != (undefined4 *****)0x0) {
        thunk_FUN_016d3fb4(pppppuVar6);
      }
      if (pppppuVar4 == (undefined4 *****)0x0) {
        pppuVar8 = (undefined4 ***)
                   FUN_00ac0588("Stream keep alive control field \'period\' is \'None\' (server bug?)"
                                ,0x40);
        if (pppppuVar9 != (undefined4 *****)&SUB_00000002 || ppppppuVar2 != (undefined4 ******)0x0)
        {
          (*(code *)**pppuVar8)();
          uVar15 = FUN_01846088(ppppppuVar3,pppppuVar14,1000,0);
          if (((uint)pppppuVar9 & 1) == 0) {
            pppuVar8 = (undefined4 ***)0x0;
            uVar15 = 0;
          }
          else {
            pppuVar8 = (undefined4 ***)((int)(ppppppuVar3 + (int)uVar15 * -0xfa) * 1000000);
          }
          *(undefined8 *)param_1 = uVar15;
          param_1[2] = pppuVar8;
          return;
        }
      }
      else {
        local_58 = pppppuVar12;
        local_54 = pppppuVar9;
        local_50 = ppppppuVar2;
        pppuVar8 = (undefined4 ***)FUN_00ac0cac(&local_58);
      }
      param_1[2] = (undefined4 ***)&DAT_3b9aca00;
      *param_1 = pppuVar8;
      return;
    }
  } while( true );
}

