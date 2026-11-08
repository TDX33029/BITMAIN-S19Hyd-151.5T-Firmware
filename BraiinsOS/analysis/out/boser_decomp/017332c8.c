// FUN_017332c8 @ 017332c8 size=1292 calls_out=21 calls_in=3
// strings: connection closed because of a broken pipe | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Streams::recv_eof | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 ****** FUN_017332c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 ******ppppppuVar2;
  undefined4 *****pppppuVar3;
  undefined4 *****pppppuVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 ****ppppuVar11;
  undefined4 *****pppppuVar12;
  undefined4 *****pppppuVar13;
  undefined1 *puVar14;
  undefined4 ****ppppuVar15;
  undefined4 ****ppppuVar16;
  undefined4 ******local_78;
  undefined4 *****local_74;
  undefined4 ****local_70;
  undefined4 ****ppppuStack_6c;
  undefined4 ****ppppuStack_68;
  undefined4 ****ppppuStack_64;
  undefined4 ******local_60;
  undefined4 *****local_5c;
  undefined4 ****local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  undefined4 ****ppppuStack_4c;
  undefined4 ******local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 ******local_38;
  undefined4 ****local_34;
  undefined4 *local_30;
  undefined4 ****local_2c;
  undefined4 local_28;
  
  FUN_01933ff0(&local_60,param_1);
  pppppuVar3 = local_5c;
  ppppppuVar2 = local_60;
  uVar9 = (uint)local_58 & 0xff;
  if (local_60 == (undefined4 ******)&DAT_00000001) {
    FUN_00a97e8c(local_5c);
  }
  else {
    FUN_01656cb0(&local_60,param_2);
    pppppuVar4 = local_5c;
    if (local_60 == (undefined4 ******)&DAT_00000001) {
      local_74 = (undefined4 *****)CONCAT31(local_74._1_3_,local_58._0_1_);
      local_78 = (undefined4 ******)local_5c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01d1949c,&DAT_01d2ca38);
    }
    uVar6 = (uint)local_58 & 0xff;
    pppppuVar13 = pppppuVar3 + 0x32;
    if (*(char *)pppppuVar13 == '\x03') {
      FUN_019a18a8(&local_78,0xb,"connection closed because of a broken pipe",0x2a);
      FUN_01386464(&local_60,&local_78);
      local_78 = local_60;
      local_74 = local_5c;
      local_70 = local_58;
      ppppuStack_6c = local_54;
      ppppuStack_68 = local_50;
      ppppuStack_64 = ppppuStack_4c;
      if (*(char *)pppppuVar13 != '\x03') {
        FUN_01381bd4(pppppuVar13);
      }
      *pppppuVar13 = local_78;
      pppppuVar3[0x33] = local_74;
      pppppuVar3[0x34] = local_70;
      pppppuVar3[0x35] = ppppuStack_6c;
      pppppuVar3[0x36] = ppppuStack_68;
      pppppuVar3[0x37] = ppppuStack_64;
    }
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d507c8 - 1 < 2 ||
         ((DAT_01d507c8 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d507c0), cVar5 != '\0')))) &&
        (iVar8 = FUN_01aaa278(DAT_01d507c0), iVar8 != 0)))) {
      local_5c = *(undefined4 ******)(DAT_01d507c0 + 0x20);
      if (local_5c == (undefined4 *****)0x0) {
LAB_017337c4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2ca48);
      }
      local_34 = &local_2c;
      local_58 = *(undefined4 *****)(DAT_01d507c0 + 0x24);
      local_54 = *(undefined4 *****)(DAT_01d507c0 + 0x28);
      local_3c = (undefined4 *)(DAT_01d507c0 + 0x1c);
      local_60 = (undefined4 ******)*local_3c;
      local_44 = &local_38;
      local_50 = (undefined4 ****)0x0;
      local_40 = 1;
      local_30 = (undefined4 *)&DAT_01d2ea4c;
      local_28 = 0x23;
      local_2c = (undefined4 ****)0x52d7c6;
      local_38 = &local_60;
      FUN_01aaaecc(DAT_01d507c0,&local_44);
      iVar8 = DAT_01d507c0;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_74 = *(undefined4 ******)(DAT_01d507c0 + 0x14);
        local_70 = *(undefined4 *****)(DAT_01d507c0 + 0x18);
        local_78 = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar10[3])(pcVar1,&local_78);
        if (iVar7 != 0) {
          FUN_01aaa328(iVar8,pcVar1,puVar10[4],&local_78,&local_44);
        }
      }
    }
    else {
      iVar8 = DAT_01d507c0;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_40 = *(undefined4 *)(DAT_01d507c0 + 0x14);
        local_3c = *(undefined4 **)(DAT_01d507c0 + 0x18);
        local_44 = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar10[3])(pcVar1,&local_44);
        if (iVar7 != 0) {
          local_30 = (undefined4 *)(DAT_01d507c0 + 0x1c);
          local_60 = (undefined4 ******)*local_30;
          local_5c = *(undefined4 ******)(DAT_01d507c0 + 0x20);
          if (local_5c == (undefined4 *****)0x0) goto LAB_017337c4;
          local_74 = &local_2c;
          local_58 = *(undefined4 *****)(DAT_01d507c0 + 0x24);
          local_54 = *(undefined4 *****)(DAT_01d507c0 + 0x28);
          local_38 = &local_78;
          local_34 = (undefined4 ****)&DAT_00000001;
          local_50 = (undefined4 ****)0x0;
          local_70 = (undefined4 ****)&DAT_01d2ea4c;
          local_28 = 0x23;
          local_2c = (undefined4 ****)0x52d7c6;
          local_78 = &local_60;
          FUN_01aaa328(iVar8,pcVar1,puVar10[4],&local_44,&local_38);
        }
      }
    }
    ppppuVar15 = pppppuVar3[0x60];
    pppppuVar13 = pppppuVar3 + 2;
    if (ppppuVar15 != (undefined4 ****)0x0) {
      ppppuVar16 = (undefined4 ****)0x0;
      do {
        if (pppppuVar3[0x5c] <= ppppuVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2ddcc);
        }
        ppppuVar11 = (undefined4 ****)pppppuVar3[0x5b][(int)ppppuVar16 * 3 + 1];
        pppppuVar12 = (undefined4 *****)pppppuVar3[0x5b][(int)ppppuVar16 * 3 + 2];
        local_60 = (undefined4 ******)(pppppuVar3 + 0x56);
        local_5c = pppppuVar12;
        local_58 = ppppuVar11;
        iVar8 = FUN_01367c40(pppppuVar3[99],pppppuVar3[100],pppppuVar12,ppppuVar11);
        puVar14 = *(undefined1 **)(iVar8 + 0x18);
        FUN_01367cb8(pppppuVar3[99],pppppuVar3[100],pppppuVar12,ppppuVar11);
        FUN_0135ceb0();
        FUN_01766e4c(pppppuVar3 + 0x3c,pppppuVar4 + 2,&local_60);
        FUN_0136ff34(pppppuVar3 + 0x3c,&local_60,pppppuVar13);
        FUN_01387ff4(pppppuVar13,&local_60,puVar14 != &DAT_3b9aca00);
        if (pppppuVar3[0x60] >= ppppuVar15) {
          ppppuVar16 = (undefined4 ****)((int)ppppuVar16 + 1);
        }
        ppppuVar15 = (undefined4 ****)((int)ppppuVar15 - (uint)(pppppuVar3[0x60] < ppppuVar15));
      } while (ppppuVar16 < ppppuVar15);
    }
    FUN_013823e0(pppppuVar3 + 0xe,param_3,pppppuVar3 + 0x56,pppppuVar13);
    FUN_00a97e8c(pppppuVar4,uVar6);
    FUN_00a97e8c(pppppuVar3,uVar9);
  }
  return ppppppuVar2;
}

