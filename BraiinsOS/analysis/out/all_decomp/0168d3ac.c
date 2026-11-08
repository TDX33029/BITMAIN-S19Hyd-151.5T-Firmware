// FUN_0168d3ac @ 0168d3ac size=1352 calls_out=10 calls_in=1
// strings: 

void FUN_0168d3ac(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  undefined4 *****pppppuVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *****pppppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *local_ec;
  int local_e4;
  undefined4 *****local_e0;
  undefined4 *local_dc;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 *****local_c8;
  undefined4 *local_c4;
  undefined4 *****local_c0;
  undefined4 *****local_b8;
  undefined4 *local_b4;
  undefined4 *****pppppuStack_b0;
  undefined4 *****local_70;
  undefined4 *local_6c;
  undefined4 *****local_68;
  undefined4 *local_64;
  
  if (param_3 == 0) {
LAB_0168d4b8:
    local_dc = (undefined4 *)0x4;
    local_e0 = (undefined4 *****)0x0;
LAB_0168d4cc:
    *param_1 = 2;
LAB_0168d500:
    if (local_e0 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(local_dc);
    }
    return;
  }
  iVar8 = param_4[1];
  iVar4 = param_2 + 0x70;
  iVar7 = param_3 * 0xc0;
  local_e4 = param_2 + param_3 * 0xc0;
LAB_0168d408:
  iVar6 = *(int *)(iVar4 + 8);
  uVar10 = *(undefined4 *)(iVar4 + 4);
  if ((((iVar8 == iVar6) && (iVar2 = thunk_FUN_016dd50a(*param_4,uVar10,iVar6), iVar2 == 0)) ||
      ((param_5 != 1 &&
       (((param_4[3] == iVar6 && (iVar2 = thunk_FUN_016dd50a(param_4[2],uVar10,iVar6), iVar2 == 0))
        || ((param_5 != 2 &&
            (((param_4[5] == iVar6 &&
              (iVar2 = thunk_FUN_016dd50a(param_4[4],uVar10,iVar6), iVar2 == 0)) ||
             ((param_5 != 3 &&
              ((param_4[7] == iVar6 &&
               (iVar6 = thunk_FUN_016dd50a(param_4[6],uVar10,iVar6), iVar6 == 0)))))))))))))) ||
     (FUN_01676758(&local_70,iVar4), pppppuVar5 = local_70,
     local_70 == (undefined4 *****)&DAT_80000000)) goto LAB_0168d3fc;
  FUN_016dd1aa((uint)&local_b8 | 4,&local_6c,0x44);
  local_b8 = pppppuVar5;
  local_ec = (undefined4 *)thunk_FUN_016d4a50(0x120);
  if (local_ec == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x120);
  }
  FUN_016dd1aa(local_ec,&local_b8,0x48);
  pppppuVar5 = (undefined4 *****)&DAT_00000001;
  local_c8 = (undefined4 *****)&DAT_00000004;
  local_c0 = (undefined4 *****)&DAT_00000001;
  local_c4 = local_ec;
  if (iVar4 + 0x50 != local_e4) {
    iVar8 = param_4[1];
    iVar7 = iVar4 + 0x50;
    do {
      uVar10 = *(undefined4 *)(iVar7 + 0x74);
      iVar4 = *(int *)(iVar7 + 0x78);
      iVar6 = iVar7 + 0xc0;
      if (((iVar8 != iVar4) || (iVar2 = thunk_FUN_016dd50a(*param_4,uVar10,iVar4), iVar2 != 0)) &&
         (((param_5 == 1 ||
           (((param_4[3] != iVar4 ||
             (iVar2 = thunk_FUN_016dd50a(param_4[2],uVar10,iVar4), iVar2 != 0)) &&
            ((param_5 == 2 ||
             (((param_4[5] != iVar4 ||
               (iVar2 = thunk_FUN_016dd50a(param_4[4],uVar10,iVar4), iVar2 != 0)) &&
              ((param_5 == 3 ||
               ((param_4[7] != iVar4 ||
                (iVar4 = thunk_FUN_016dd50a(param_4[6],uVar10,iVar4), iVar4 != 0)))))))))))) &&
          (FUN_01676758(&local_70,iVar7 + 0x70), pppppuVar1 = local_70,
          local_70 != (undefined4 *****)&DAT_80000000)))) {
        FUN_016dd1aa((uint)&local_b8 | 4,&local_6c,0x44);
        local_b8 = pppppuVar1;
        if (pppppuVar5 == local_c8) {
          FUN_0166e728(&local_c8,pppppuVar5,1,4,0x48);
          local_ec = local_c4;
        }
        FUN_016dd1aa(local_ec + (int)pppppuVar5 * 0x12,&local_b8,0x48);
        pppppuVar5 = (undefined4 *****)((int)pppppuVar5 + 1);
        local_c0 = pppppuVar5;
      }
      iVar7 = iVar6;
    } while (iVar6 != local_e4);
  }
  pppppuVar5 = local_c0;
  local_dc = local_c4;
  local_e0 = local_c8;
  if (local_c0 != (undefined4 *****)0x0) {
    iVar7 = (int)local_c0 * 8;
    iVar4 = thunk_FUN_016d4a50(iVar7);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar7);
    }
    iVar8 = 0;
    do {
      uVar10 = *(undefined4 *)((int)local_dc + iVar8 * 9 + 8);
      puVar3 = (undefined4 *)(iVar4 + iVar8);
      *puVar3 = *(undefined4 *)((int)local_dc + iVar8 * 9 + 4);
      iVar8 = iVar8 + 8;
      puVar3[1] = uVar10;
    } while (iVar7 != iVar8);
    FUN_0166df74(&local_70,iVar4,pppppuVar5,&DAT_0041950f,2);
    local_c8 = local_70;
    local_c4 = local_6c;
    local_c0 = local_68;
    FUN_0166df74(&local_70,param_4,param_5,&DAT_0041950f,2);
    local_b8 = local_70;
    local_b4 = local_6c;
    pppppuStack_b0 = local_68;
    local_68 = &local_b8;
    local_70 = &local_c8;
    local_64 = &DAT_006043a8;
    local_6c = &DAT_006043a8;
    FUN_00600d2c(&local_d4,&DAT_00593eee,&local_70);
    if (local_b8 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(local_b4);
    }
    if (local_c8 != (undefined4 *****)0x0) {
      thunk_FUN_016d3fb4(local_c4);
    }
    thunk_FUN_016d3fb4(iVar4);
    uVar10 = 0;
    uVar9 = 0;
    if ((local_dc[3] != 0x80000003) && (0x80000001 < (uint)local_dc[3])) {
      local_e4 = local_dc[4];
      uVar9 = 1;
      local_ec = (undefined4 *)local_dc[5];
    }
    if (local_cc < 0) {
LAB_0168d83c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar10,local_cc);
    }
    if (local_cc == 0) {
      iVar4 = 1;
      iVar7 = 0;
    }
    else {
      iVar4 = thunk_FUN_016d4a50(local_cc);
      iVar7 = local_cc;
      if (iVar4 == 0) {
        uVar10 = 1;
        goto LAB_0168d83c;
      }
    }
    FUN_016dd1aa(iVar4,local_d0,local_cc);
    if (local_d4 != 0) {
      thunk_FUN_016d3fb4(local_d0);
    }
    param_1[8] = 0;
    param_1[9] = 0x80000000;
    param_1[1] = local_e4;
    *param_1 = uVar9;
    param_1[2] = local_ec;
    param_1[3] = iVar7;
    param_1[4] = iVar4;
    param_1[5] = local_cc;
    param_1[6] = 0;
    param_1[7] = 4;
    puVar3 = local_dc;
    for (; pppppuVar5 != (undefined4 *****)0x0;
        pppppuVar5 = (undefined4 *****)((int)pppppuVar5 + -1)) {
      FUN_01666b88(puVar3);
      puVar3 = puVar3 + 0x12;
    }
    goto LAB_0168d500;
  }
  goto LAB_0168d4cc;
LAB_0168d3fc:
  iVar4 = iVar4 + 0xc0;
  iVar7 = iVar7 + -0xc0;
  if (iVar7 == 0) goto LAB_0168d4b8;
  goto LAB_0168d408;
}

