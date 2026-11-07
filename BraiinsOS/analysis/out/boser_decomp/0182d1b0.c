// FUN_0182d1b0 @ 0182d1b0 size=2276 calls_out=22 calls_in=1
// strings: Proxy-Authorization:  | HTTP/1.1 200 | HTTP/1.0 200 | HTTP/1.1 407

void FUN_0182d1b0(uint *param_1,code *param_2,code *param_3)

{
  code cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  code *pcVar7;
  code *pcVar8;
  code *unaff_r9;
  int *piVar9;
  uint *puVar10;
  undefined8 uVar11;
  code *local_ec4;
  code *local_ebc;
  undefined1 auStack_eb0 [728];
  undefined1 auStack_bd8 [744];
  int local_8f0;
  code *local_8ec;
  code *local_8e8;
  undefined1 auStack_8e0 [728];
  int local_608 [2];
  undefined2 local_600;
  undefined1 auStack_330 [728];
  code *local_58;
  code *pcStack_54;
  uint uStack_50;
  code *local_48;
  code *local_44;
  uint uStack_40;
  code *local_38;
  code *local_34;
  code *local_30;
  code *local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2[0x74]) {
  case (code)0x0:
    uVar4 = *(uint *)(param_2 + 0x40);
    uVar5 = *(uint *)(param_2 + 0x44);
    *(uint *)(param_2 + 0x78) = uVar4;
    *(uint *)(param_2 + 0x7c) = uVar5;
    break;
  case (code)0x1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e354);
  case (code)0x2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e354);
  case (code)0x3:
    uVar4 = *(uint *)(param_2 + 0x78);
    uVar5 = *(uint *)(param_2 + 0x7c);
    break;
  case (code)0x4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_2[0x67c]) {
    case (code)0x0:
      uVar11 = *(undefined8 *)(param_2 + 0x370);
      uVar6 = *(undefined2 *)(param_2 + 0x678);
      pcVar8 = *(code **)(param_2 + 0x668);
      goto LAB_0182d478;
    case (code)0x1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1e324);
    case (code)0x2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1e324);
    case (code)0x3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2[0x69c]) {
      case (code)0x0:
        pcVar2 = *(code **)(param_2 + 0x680);
        pcVar8 = *(code **)(param_2 + 0x684);
        unaff_r9 = *(code **)(param_2 + 0x688);
        break;
      case (code)0x1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d1e2f4);
      case (code)0x2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d1e2f4);
      case (code)0x3:
        unaff_r9 = *(code **)(param_2 + 0x690);
        pcVar7 = *(code **)(param_2 + 0x698);
        pcVar8 = param_3;
        goto LAB_0182d5bc;
      }
      break;
    case (code)0x4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(param_2[0x69c]) {
      case (code)0x0:
        pcVar8 = *(code **)(param_2 + 0x684);
        local_38 = *(code **)(param_2 + 0x688);
        local_34 = *(code **)(param_2 + 0x68c);
        goto LAB_0182d8cc;
      case (code)0x1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d1e2e4);
      case (code)0x2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d1e2e4);
      case (code)0x3:
        local_38 = *(code **)(param_2 + 0x690);
        local_34 = *(code **)(param_2 + 0x694);
        pcVar8 = *(code **)(param_2 + 0x698);
        goto LAB_0182d8d8;
      }
    }
    goto LAB_0182d5a4;
  }
  (**(code **)(uVar5 + 0xc))(&local_8f0,uVar4,param_3);
  if (local_8f0 == 4) {
    *param_1 = 4;
    cVar1 = (code)0x3;
    goto LAB_0182db68;
  }
  FUN_01bed4e2(auStack_eb0,auStack_8e0,0x2d8);
  FUN_01139b38(*(uint *)(param_2 + 0x78),*(uint *)(param_2 + 0x7c));
  if (local_8f0 == 3) {
    uVar4 = 0;
    param_3 = local_8ec;
    unaff_r9 = local_8e8;
  }
  else {
    FUN_01bed4e2(auStack_8e0,auStack_eb0,0x2d8);
    if ((*(uint *)(param_2 + 0x58) != 0) &&
       (uVar11 = FUN_01415984(*(uint *)(param_2 + 0x54)), (int)uVar11 != 0)) {
      *(uint *)(param_2 + 0x78) = 7;
      *(undefined8 *)(param_2 + 0x7c) = uVar11;
      if (*(uint *)(param_2 + 0x58) == 0) {
        uVar6 = 0x1bb;
      }
      else {
        FUN_01415bb0(local_608,*(uint *)(param_2 + 0x54));
        uVar6 = local_600;
        if (local_608[0] == 0) {
          uVar6 = 0x1bb;
        }
      }
      FUN_01bed4e2(auStack_bd8,&local_8f0,0x2e8);
      FUN_01bed4e2(param_2 + 0x88,auStack_bd8,0x2e8);
      *(undefined8 *)(param_2 + 0x370) = uVar11;
      *(undefined2 *)(param_2 + 0x678) = uVar6;
      param_2[0x67c] = (code)0x0;
      *(code **)(param_2 + 0x668) = param_2;
      pcVar8 = param_2;
LAB_0182d478:
      param_2[0x67d] = (code)0x1;
      pcVar2 = param_2 + 0x378;
      FUN_01bed4e2(pcVar2,param_2 + 0x88,0x2e8);
      local_38 = param_2 + 0x660;
      *(undefined8 *)local_38 = uVar11;
      local_30 = param_2 + 0x67a;
      *(undefined2 *)local_30 = uVar6;
      local_2c = FUN_012fcf18;
      local_34 = (code *)&DAT_0132b6a0;
      FUN_00664898(&local_48,&DAT_0050c796,&local_38);
      local_58 = local_48;
      pcStack_54 = local_44;
      uStack_50 = uStack_40;
      pcVar7 = param_2 + 0x66c;
      iVar3 = 2;
      *(code **)pcVar7 = local_48;
      *(code **)(param_2 + 0x670) = local_44;
      *(uint *)(param_2 + 0x674) = uStack_40;
      if ((uint)(*(uint *)pcVar8 < 3) <= -*(uint *)(pcVar8 + 4)) {
        iVar3 = *(uint *)pcVar8 - 3;
      }
      if (iVar3 == 2) {
        local_38 = (code *)0x0;
        local_2c = (code *)0x0;
        if (*(uint *)(pcVar8 + 0x28) == 0) {
          local_38 = (code *)0x2;
        }
        local_30 = pcVar8;
        while( true ) {
          uVar11 = FUN_01414bbc(&local_38);
          iVar3 = (int)((ulonglong)uVar11 >> 0x20);
          if ((int)uVar11 == 0) break;
          uVar11 = FUN_00f80570();
          FUN_01ac6cbc(pcVar7,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
          FUN_01ac6cbc(pcVar7,0x5312dd,2);
          FUN_01ac6cbc(pcVar7,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
          FUN_01ac6cbc(pcVar7,&DAT_00531047,2);
        }
      }
      else if (iVar3 == 1) {
        FUN_01ac6cbc(pcVar7,"Proxy-Authorization: ",0x15);
        FUN_01ac6cbc(pcVar7,*(uint *)(pcVar8 + 0xc),*(uint *)(pcVar8 + 0x10));
        FUN_01ac6cbc(pcVar7,&DAT_00531047,2);
      }
      FUN_01ac6cbc(pcVar7,&DAT_00531047,2);
      param_2[0x69c] = (code)0x0;
      pcVar8 = *(code **)(param_2 + 0x670);
      unaff_r9 = *(code **)(param_2 + 0x674);
      *(code **)(param_2 + 0x680) = pcVar2;
      *(code **)(param_2 + 0x684) = pcVar8;
      *(code **)(param_2 + 0x688) = unaff_r9;
LAB_0182d5a4:
      pcVar7 = (code *)0x0;
      *(code **)(param_2 + 0x68c) = pcVar8;
      *(code **)(param_2 + 0x690) = unaff_r9;
      *(code **)(param_2 + 0x694) = pcVar2;
      *(uint *)(param_2 + 0x698) = 0;
LAB_0182d5bc:
      local_ebc = param_2 + 0x69c;
      if (pcVar7 < unaff_r9) {
        uVar4 = *(uint *)(param_2 + 0x68c);
        piVar9 = *(int **)(param_2 + 0x694);
        puVar10 = param_1;
        do {
          if (*piVar9 == 2) {
            FUN_019dfa94(&local_38,piVar9[3],piVar9[4],param_3,pcVar7 + uVar4,
                         (int)unaff_r9 - (int)pcVar7);
          }
          else {
            FUN_01863754(&local_38,piVar9,param_3,pcVar7 + uVar4,(int)unaff_r9 - (int)pcVar7);
          }
          if (((uint)local_38 & 0xff) == 4) {
            puVar10 = (uint *)0x0;
            pcVar8 = local_34;
          }
          else {
            if (((uint)local_38 & 0xff) != 5) {
              cVar1 = (code)0x1;
              uVar4 = (uint)local_38 & 0xff;
              if (uVar4 == 5) {
                cVar1 = (code)0x3;
              }
              *local_ebc = cVar1;
              cVar1 = (code)0x3;
              if (uVar4 == 5) goto LAB_0182da1c;
              if (uVar4 == 4) goto LAB_0182d678;
              uVar4 = 1;
              uVar5 = 3;
              param_3 = local_38;
              unaff_r9 = local_34;
              goto LAB_0182dac4;
            }
            puVar10 = (uint *)((uint)puVar10 | 1);
          }
          if (((uint)puVar10 & 1) != 0) {
            cVar1 = (code)0x3;
            goto LAB_0182da14;
          }
          pcVar7 = pcVar7 + (int)pcVar8;
          *(code **)(param_2 + 0x698) = pcVar7;
        } while (pcVar7 < unaff_r9);
      }
      *local_ebc = (code)0x1;
LAB_0182d678:
      pcVar7 = (code *)0x0;
      FUN_01bed93e(param_2 + 0x6a0,0,0x2000);
      *(uint *)(param_2 + 0x680) = 0;
LAB_0182d9e4:
      local_34 = (code *)(0x2000 - (int)pcVar7);
      pcVar8 = param_2 + 0x378;
      local_38 = param_2 + (int)(pcVar7 + 0x6a0);
      *(code **)(param_2 + 0x684) = pcVar8;
      *(code **)(param_2 + 0x688) = local_38;
      *(code **)(param_2 + 0x68c) = local_34;
      param_2[0x69c] = (code)0x0;
LAB_0182d8cc:
      *(code **)(param_2 + 0x690) = local_38;
      *(code **)(param_2 + 0x694) = local_34;
      *(code **)(param_2 + 0x698) = pcVar8;
LAB_0182d8d8:
      local_30 = (code *)0x0;
      local_2c = local_34;
      if (*(uint *)pcVar8 == 2) {
        FUN_0183b030(&local_48,*(uint *)(pcVar8 + 0xc),*(uint *)(pcVar8 + 0x10),param_3,&local_38);
      }
      else {
        FUN_0183ad30(&local_48,pcVar8,param_3,&local_38);
      }
      if ((char)local_48 == '\x05') {
        cVar1 = (code)0x4;
LAB_0182da14:
        param_2[0x69c] = (code)0x3;
LAB_0182da1c:
        local_ec4 = param_2 + 0x67c;
        *local_ec4 = cVar1;
        goto LAB_0182db10;
      }
      uVar5 = (uint)local_48 & 0xff;
      if (uVar5 == 4) {
        if (local_34 < local_30) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,local_30,local_34,&DAT_01d20c0c);
        }
        uVar5 = 3;
        param_2[0x69c] = (code)0x1;
        if (local_30 == (code *)0x0) {
          uVar4 = 5;
        }
        else {
          pcVar7 = local_30 + *(uint *)(param_2 + 0x680);
          *(code **)(param_2 + 0x680) = pcVar7;
          if ((code *)0x2000 < pcVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,pcVar7,0x2000,&DAT_01d1e334);
          }
          if (pcVar7 < (code *)0xc) {
            uVar4 = 6;
          }
          else {
            pcVar8 = param_2 + 0x6a0;
            iVar3 = thunk_FUN_01bed842("HTTP/1.1 200",pcVar8,0xc);
            if ((iVar3 == 0) || (iVar3 = thunk_FUN_01bed842("HTTP/1.0 200",pcVar8,0xc), iVar3 == 0))
            {
              if (*(int *)(pcVar8 + (int)(pcVar7 + -4)) != 0xa0d0a0d) goto code_r0x0182d9dc;
              uVar5 = *(uint *)(param_2 + 0x378);
              param_3 = *(code **)(param_2 + 0x380);
              unaff_r9 = *(code **)(param_2 + 900);
              param_2[0x67d] = (code)0x0;
              uVar4 = *(uint *)(param_2 + 0x37c);
              FUN_01bed4e2(&local_8f0,param_2 + 0x388,0x2d8);
            }
            else {
              iVar3 = thunk_FUN_01bed842("HTTP/1.1 407",pcVar8,0xc);
              uVar4 = 6;
              if (iVar3 == 0) {
                uVar4 = 3;
              }
            }
          }
        }
        goto LAB_0182dac4;
      }
      cVar1 = (code)0x1;
      uVar4 = 1;
      if (uVar5 == 5) {
        cVar1 = (code)0x3;
      }
      param_2[0x69c] = cVar1;
      cVar1 = (code)0x4;
      if (uVar5 == 5) goto LAB_0182da1c;
      uVar5 = 3;
      param_3 = local_48;
      unaff_r9 = local_44;
      goto LAB_0182dac4;
    }
    unaff_r9 = *(code **)(param_2 + 0x80);
    uVar4 = 2;
    param_3 = (code *)0x0;
    *(uint *)(param_2 + 0x78) = 2;
    *(uint *)(param_2 + 0x7c) = 0;
    FUN_0182c114(&local_8f0);
  }
  FUN_01435814(param_2 + 0x48);
  uVar5 = 3;
  FUN_0182c868(param_2);
  goto LAB_0182db48;
code_r0x0182d9dc:
  if (pcVar7 == (code *)0x2000) goto LAB_0182da9c;
  goto LAB_0182d9e4;
LAB_0182da9c:
  uVar4 = 4;
LAB_0182dac4:
  FUN_019bb7e0(*(uint *)(param_2 + 0x66c),*(uint *)(param_2 + 0x670));
  if (param_2[0x67d] == (code)0x1) {
    FUN_0182c114(param_2 + 0x378);
  }
  param_2[0x67d] = (code)0x0;
  FUN_01bed4e2(local_608,&local_8f0,0x2d8);
  param_2[0x67c] = (code)0x1;
  if (uVar5 == 4) {
LAB_0182db10:
    cVar1 = (code)0x4;
    *param_1 = 4;
    goto LAB_0182db68;
  }
  FUN_01bed4e2(auStack_330,local_608,0x2d8);
  FUN_0182dc98(param_2 + 0x88);
  FUN_01435814(param_2 + 0x48);
  FUN_0182c868(param_2);
LAB_0182db48:
  *param_1 = uVar5;
  param_1[1] = uVar4;
  param_1[2] = (uint)param_3;
  param_1[3] = (uint)unaff_r9;
  FUN_01bed4e2(param_1 + 4,auStack_330,0x2d8);
  cVar1 = (code)0x1;
LAB_0182db68:
  param_2[0x74] = cVar1;
  return;
}

