// FUN_01728748 @ 01728748 size=4200 calls_out=11 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u)) | fe_mul121666 | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

/* WARNING: Removing unreachable block (ram,0x017297b8) */

undefined8 FUN_01728748(undefined4 param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint local_2d4;
  uint local_2d0;
  int local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_28c;
  uint local_278;
  uint local_274;
  int local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  int local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  undefined1 auStack_1ac [40];
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  undefined1 auStack_15c [40];
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  undefined1 auStack_10c [40];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined1 auStack_94 [40];
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  undefined3 uStack_50;
  undefined1 local_4d;
  uint local_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  if ((param_2 <= &local_6c || &local_4c <= param_2) &&
     ((&local_6c <= param_2 || (param_2 + 8 <= &local_6c)))) {
    uStack_68 = param_2[1];
    uStack_64 = param_2[2];
    uStack_60 = param_2[3];
    local_5c = param_2[4];
    uStack_58 = param_2[5];
    uStack_54 = param_2[6];
    uVar32 = local_5c;
    if (param_3 <= &local_4c) {
      uVar32 = 0;
    }
    if (&local_4c < param_3) {
      uVar32 = 1;
    }
    if (local_2c <= param_3) {
      uVar32 = 0;
    }
    uVar34 = param_2[7] >> 0x18 & 0x7f | 0x40;
    local_6c = *param_2 & 0xfffffff8;
    _uStack_50 = CONCAT13((char)uVar34,(int3)param_2[7]);
    if ((uVar32 == 0) && ((&local_4c <= param_3 || (param_3 + 8 <= &local_4c)))) {
      local_4c = *param_3;
      uStack_48 = param_3[1];
      uStack_44 = param_3[2];
      uStack_40 = param_3[3];
      local_3c = param_3[4];
      uStack_38 = param_3[5];
      uStack_34 = param_3[6];
      uStack_30 = param_3[7] & 0x7fffffff;
      FUN_0170681c(&local_24c,&local_4c);
      FUN_016dd606(&local_1fc,0,0x28);
      FUN_016dd52c(&local_1d4,&local_24c,0x28);
      local_200 = 0;
      local_28c = 0xfe;
      local_204 = 0;
      local_208 = 0;
      local_214 = 0;
      local_220 = 0;
      local_20c = 0;
      local_210 = 0;
      local_2a0 = 0;
      local_2a4 = 0;
      local_2a8 = 0;
      local_2b0 = 0;
      local_2b4 = 0;
      local_2b8 = 0;
      local_2bc = 0;
      local_2c0 = 0;
      local_29c = 0;
      local_2ac = 1;
      local_2d0 = 0;
      local_2d4 = 0;
      uVar32 = 0;
      local_224 = 1;
      while( true ) {
        uVar33 = (int)uVar34 >> (local_28c & 7) & 1;
        local_254 = local_1d8;
        local_258 = local_1dc;
        uVar34 = local_2a4;
        local_25c = local_1e0;
        uVar6 = local_2a8;
        local_260 = local_1e4;
        uVar7 = local_2b0;
        local_264 = local_1e8;
        uVar8 = local_2b4;
        uVar9 = local_2b8;
        local_268 = local_1ec;
        local_26c = local_1f0;
        uVar10 = local_2bc;
        local_270 = local_1f4;
        iVar11 = local_2c0;
        uVar12 = local_29c;
        local_274 = local_1f8;
        local_278 = local_1fc;
        uVar13 = local_2ac;
        uVar14 = local_1b0;
        uVar15 = local_200;
        uVar16 = local_1b4;
        uVar17 = local_204;
        uVar18 = local_208;
        uVar19 = local_1b8;
        uVar20 = local_20c;
        uVar21 = local_1bc;
        uVar22 = local_210;
        uVar23 = local_1c0;
        uVar24 = local_214;
        uVar25 = local_1c4;
        uVar26 = local_2d4;
        local_218 = local_1c8;
        uVar27 = local_2d0;
        local_21c = local_1cc;
        uVar28 = local_1d4;
        uVar29 = local_220;
        uVar30 = local_1d0;
        uVar31 = local_224;
        if (uVar32 == uVar33) {
          local_254 = local_2a0;
          local_2a0 = local_1d8;
          local_258 = local_2a4;
          uVar34 = local_1dc;
          local_25c = local_2a8;
          uVar6 = local_1e0;
          local_260 = local_2b0;
          uVar7 = local_1e4;
          local_264 = local_2b4;
          uVar8 = local_1e8;
          uVar9 = local_1ec;
          local_268 = local_2b8;
          local_26c = local_2bc;
          uVar10 = local_1f0;
          local_270 = local_2c0;
          iVar11 = local_1f4;
          uVar12 = local_1f8;
          local_274 = local_29c;
          local_278 = local_2ac;
          uVar13 = local_1fc;
          uVar14 = local_200;
          uVar15 = local_1b0;
          uVar16 = local_204;
          uVar17 = local_1b4;
          uVar18 = local_1b8;
          uVar19 = local_208;
          uVar20 = local_1bc;
          uVar21 = local_20c;
          uVar22 = local_1c0;
          uVar23 = local_210;
          uVar24 = local_1c4;
          uVar25 = local_214;
          uVar26 = local_1c8;
          local_218 = local_2d4;
          uVar27 = local_1cc;
          local_21c = local_2d0;
          uVar28 = local_224;
          uVar29 = local_1d0;
          uVar30 = local_220;
          uVar31 = local_1d4;
        }
        local_1d4 = uVar31;
        local_220 = uVar30;
        local_1d0 = uVar29;
        local_224 = uVar28;
        local_1cc = uVar27;
        local_1c8 = uVar26;
        local_214 = uVar25;
        local_1c4 = uVar24;
        local_210 = uVar23;
        local_1c0 = uVar22;
        local_20c = uVar21;
        local_1bc = uVar20;
        local_208 = uVar19;
        local_1b8 = uVar18;
        local_1b4 = uVar17;
        local_204 = uVar16;
        local_1b0 = uVar15;
        local_200 = uVar14;
        local_1fc = uVar13;
        local_1f8 = uVar12;
        local_1f4 = iVar11;
        local_1f0 = uVar10;
        local_1ec = uVar9;
        local_1e8 = uVar8;
        local_1e4 = uVar7;
        local_1e0 = uVar6;
        local_1dc = uVar34;
        local_1d8 = local_2a0;
        FUN_01706a0c(&local_e4,&local_1d4,&local_278);
        FUN_01706a0c(&local_bc,&local_224,&local_1fc);
        FUN_01706e70(auStack_15c,&local_224,&local_1fc);
        FUN_01706e70(&local_134,&local_1d4,&local_278);
        if (((((((0xd333332 < local_e4) || (0x6999999 < local_e0)) || (0xd333332 < local_dc)) ||
              ((0x6999999 < local_d8 || (0xd333332 < local_d4)))) || (0x6999999 < local_d0)) ||
            (((0xd333332 < local_cc || (0x6999999 < local_c8)) ||
             ((0xd333332 < local_c4 ||
              (((0x6999999 < local_c0 ||
                (FUN_01705480(&local_278,&local_e4,auStack_15c), 0xd333332 < local_134)) ||
               (0x6999999 < local_130)))))))) ||
           (((0xd333332 < local_12c || (0x6999999 < local_128)) ||
            ((0xd333332 < local_124 ||
             (((0x6999999 < local_120 || (0xd333332 < local_11c)) ||
              ((0x6999999 < local_118 || ((0xd333332 < local_114 || (0x6999999 < local_110))))))))))
           )) goto LAB_01729748;
        FUN_01705480(&local_1fc,&local_134,&local_bc);
        FUN_0170cbcc(auStack_1ac,&local_bc);
        FUN_0170cbcc(&local_184,auStack_15c);
        FUN_01706e70(auStack_10c,&local_278,&local_1fc);
        FUN_01706a0c(&local_134,&local_278,&local_1fc);
        if (((0xd333332 < local_184) ||
            ((((0x6999999 < local_180 || (0xd333332 < local_17c)) || (0x6999999 < local_178)) ||
             ((0xd333332 < local_174 || (0x6999999 < local_170)))))) ||
           (((0xd333332 < local_16c || ((0x6999999 < local_168 || (0xd333332 < local_164)))) ||
            (0x6999999 < local_160)))) goto LAB_01729748;
        FUN_01705480(&local_224,&local_184,auStack_1ac);
        FUN_01706a0c(&local_bc,&local_184,auStack_1ac);
        FUN_0170cbcc(&local_1fc,&local_134);
        if ((((((0xd333332 < local_bc) || (0x6999999 < local_b8)) || (0xd333332 < local_b4)) ||
             ((0x6999999 < local_b0 || (0xd333332 < local_ac)))) ||
            ((0x6999999 < local_a8 || ((0xd333332 < local_a4 || (0x6999999 < local_a0)))))) ||
           ((0xd333332 < local_9c || (0x6999999 < local_98)))) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2c94("constant_time_declassify_int(f->v[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                       ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0x103,
                       "fe_mul121666");
        }
        uVar2 = (ulonglong)local_b8 * 0x1db42 + ((ulonglong)local_bc * 0x1db42 >> 0x1a);
        uVar3 = (ulonglong)local_b4 * 0x1db42 + (uVar2 >> 0x19);
        uVar4 = (ulonglong)local_b0 * 0x1db42 + (uVar3 >> 0x1a);
        local_26c = (uint)uVar4 & 0x1ffffff;
        uVar4 = (ulonglong)local_ac * 0x1db42 + (uVar4 >> 0x19);
        local_268 = (uint)uVar4 & 0x3ffffff;
        uVar4 = (ulonglong)local_a8 * 0x1db42 + (uVar4 >> 0x1a);
        local_264 = (uint)uVar4 & 0x1ffffff;
        uVar4 = (ulonglong)local_a4 * 0x1db42 + (uVar4 >> 0x19);
        local_260 = (uint)uVar4 & 0x3ffffff;
        uVar4 = (ulonglong)local_a0 * 0x1db42 + (uVar4 >> 0x1a);
        local_25c = (uint)uVar4 & 0x1ffffff;
        uVar4 = (ulonglong)local_9c * 0x1db42 + (uVar4 >> 0x19);
        local_258 = (uint)uVar4 & 0x3ffffff;
        lVar5 = (ulonglong)local_98 * 0x1db42 + (uVar4 >> 0x1a);
        uVar32 = (uint)lVar5;
        local_254 = uVar32 & 0x1ffffff;
        local_278 = (uVar32 >> 0x19 | (int)((ulonglong)lVar5 >> 0x20) << 7) * 0x13 +
                    ((uint)((ulonglong)local_bc * 0x1db42) & 0x3ffffff);
        local_274 = ((uint)uVar2 & 0x1ffffff) + (local_278 >> 0x1a);
        local_278 = local_278 & 0x3ffffff;
        local_270 = ((uint)uVar3 & 0x3ffffff) + (local_274 >> 0x19);
        local_274 = local_274 & 0x1ffffff;
        FUN_0170cbcc(&local_1d4,auStack_10c);
        FUN_01706e70(&local_e4,auStack_1ac,&local_278);
        if ((((0xd333332 < local_24c) || (0x6999999 < local_248)) || (0xd333332 < local_244)) ||
           (((((0x6999999 < local_240 || (0xd333332 < local_23c)) ||
              ((0x6999999 < local_238 || ((0xd333332 < local_234 || (0x6999999 < local_230)))))) ||
             (0xd333332 < local_22c)) || (0x6999999 < local_228)))) goto LAB_01729748;
        FUN_01705480(&local_278,&local_24c,&local_1fc);
        FUN_01705480(&local_1fc,&local_bc,&local_e4);
        if (local_28c == 0) break;
        local_2d0 = local_21c;
        uVar34 = (uint)(byte)auStack_94[((int)(local_28c - 1) >> 3) + 0x28];
        local_2ac = local_278;
        local_29c = local_274;
        local_2c0 = local_270;
        local_2bc = local_26c;
        local_2b8 = local_268;
        local_2b4 = local_264;
        local_2b0 = local_260;
        local_2a8 = local_25c;
        local_2a4 = local_258;
        local_2a0 = local_254;
        local_2d4 = local_218;
        uVar32 = uVar33;
        local_28c = local_28c - 1;
      }
      if (uVar33 == 0) {
        uVar32 = local_204;
        uVar15 = local_1b0;
        uVar34 = local_200;
        uVar16 = local_1b8;
        uVar6 = local_208;
        uVar17 = local_1bc;
        uVar7 = local_214;
        uVar8 = local_20c;
        uVar9 = local_218;
        uVar10 = local_220;
        uVar12 = local_210;
        uVar13 = local_21c;
        uVar14 = local_224;
      }
      else {
        local_1d8 = local_254;
        local_1dc = local_258;
        uVar32 = local_1b4;
        uVar15 = local_200;
        uVar34 = local_1b0;
        local_1b4 = local_204;
        local_1e0 = local_25c;
        local_1e4 = local_260;
        uVar16 = local_208;
        local_1e8 = local_264;
        local_1ec = local_268;
        local_1f0 = local_26c;
        local_1f4 = local_270;
        local_1f8 = local_274;
        local_1fc = local_278;
        uVar6 = local_1b8;
        uVar17 = local_20c;
        uVar7 = local_1c4;
        uVar8 = local_1bc;
        uVar9 = local_1c8;
        uVar10 = local_1d0;
        uVar12 = local_1c0;
        local_1c0 = local_210;
        local_1c8 = local_218;
        local_1d0 = local_220;
        local_1c4 = local_214;
        uVar13 = local_1cc;
        local_1cc = local_21c;
        uVar14 = local_1d4;
        local_1d4 = local_224;
      }
      local_1bc = uVar17;
      local_1b8 = uVar16;
      local_1b0 = uVar15;
      local_224 = uVar14;
      local_220 = uVar10;
      local_21c = uVar13;
      local_218 = uVar9;
      local_214 = uVar7;
      local_210 = uVar12;
      local_20c = uVar8;
      local_208 = uVar6;
      local_204 = uVar32;
      local_200 = uVar34;
      FUN_016dd52c(auStack_94,&local_1fc,0x28);
      FUN_01710e00(&local_1fc,auStack_94);
      if ((((uVar14 < 0xd333333) && (uVar10 < 0x699999a)) && (uVar13 < 0xd333333)) &&
         (((uVar9 < 0x699999a && (uVar7 < 0xd333333)) &&
          (((uVar12 < 0x699999a && ((uVar8 < 0xd333333 && (uVar6 < 0x699999a)))) &&
           ((uVar32 < 0xd333333 && (uVar34 < 0x699999a)))))))) {
        FUN_01705480(&local_224,&local_224,&local_1fc);
        FUN_01706384(param_1,&local_224);
        if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
          FUN_016d2b78();
        }
        return 0;
      }
LAB_01729748:
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                   ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x17297dc);
  (*pcVar1)();
}

