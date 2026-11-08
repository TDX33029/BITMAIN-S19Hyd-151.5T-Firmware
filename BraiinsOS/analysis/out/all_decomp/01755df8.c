// FUN_01755df8 @ 01755df8 size=1056 calls_out=6 calls_in=2
// strings: 

void FUN_01755df8(uint *param_1,uint *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  uVar6 = param_2[0x1a];
  if (0x3f < uVar6) {
    uVar2 = FUN_0170793c();
    goto LAB_01756210;
  }
  puVar7 = param_2 + 10;
  uVar4 = uVar6 + 1;
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  *(undefined1 *)((int)puVar7 + uVar6) = 0x80;
  if (uVar4 < 0x39) {
    if (uVar4 != 0x38) {
      iVar5 = 0x38 - uVar4;
      puVar3 = (uint *)((int)puVar7 + uVar4);
      goto LAB_017561d0;
    }
  }
  else {
    if (uVar4 != 0x40) {
      FUN_016dd606((uint *)((int)puVar7 + uVar4),0,0x40 - uVar4);
    }
    if ((DAT_018dfe48 & 0x10) == 0) {
      if ((DAT_018dfe48 & 1) == 0) {
        FUN_01788540();
      }
      else {
        FUN_01789330();
      }
    }
    else {
      FUN_01789f40(param_2,puVar7,1);
    }
    iVar5 = 0x38;
    puVar3 = puVar7;
LAB_017561d0:
    FUN_016dd606(puVar3,0,iVar5);
  }
  puVar3 = param_2 + 0x18;
  if ((&uStack_34 <= puVar3) || (param_2 + 0x19 <= &uStack_34)) {
    if (&uStack_30 <= puVar3 || puVar3 <= &uStack_34) {
      puVar3 = param_2 + 0x19;
      param_2[0x18] =
           uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
      ;
      if (((&uStack_30 <= puVar3) || (param_2 + 0x1a <= &uStack_30)) &&
         (puVar3 <= &uStack_30 || local_2c <= puVar3)) {
        param_2[0x19] =
             uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
        if ((DAT_018dfe48 & 0x10) == 0) {
          if ((DAT_018dfe48 & 1) == 0) {
            FUN_01788540();
          }
          else {
            FUN_01789330();
          }
        }
        else {
          FUN_01789f40(param_2,puVar7,1);
        }
        param_2[0x1a] = 0;
        FUN_016dd606(puVar7,0,0x40);
        if (param_2[0x1b] == 0x20) {
          if ((param_1 < &uStack_38) && (&uStack_38 < param_1 + 1)) goto LAB_01756214;
          uVar6 = *param_2;
          if (param_1 < &uStack_34 && &uStack_38 < param_1) goto LAB_01756214;
          puVar7 = param_1 + 1;
          *param_1 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                     uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 2)) goto LAB_01756214;
          uVar6 = param_2[1];
          if (puVar7 < &uStack_34 && &uStack_38 < puVar7) goto LAB_01756214;
          puVar7 = param_1 + 2;
          param_1[1] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 3)) goto LAB_01756214;
          uVar6 = param_2[2];
          if (&uStack_38 < puVar7 && puVar7 < &uStack_34) goto LAB_01756214;
          puVar7 = param_1 + 3;
          param_1[2] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 4)) goto LAB_01756214;
          uVar6 = param_2[3];
          if (&uStack_38 < puVar7 && puVar7 < &uStack_34) goto LAB_01756214;
          puVar7 = param_1 + 4;
          param_1[3] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 5)) goto LAB_01756214;
          uVar6 = param_2[4];
          if (&uStack_38 < puVar7 && puVar7 < &uStack_34) goto LAB_01756214;
          puVar7 = param_1 + 5;
          param_1[4] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 6)) goto LAB_01756214;
          uVar6 = param_2[5];
          if (&uStack_38 < puVar7 && puVar7 < &uStack_34) goto LAB_01756214;
          puVar7 = param_1 + 6;
          param_1[5] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 7)) goto LAB_01756214;
          uVar6 = param_2[6];
          if (&uStack_38 < puVar7 && puVar7 < &uStack_34) goto LAB_01756214;
          puVar7 = param_1 + 7;
          param_1[6] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
          if ((puVar7 < &uStack_38) && (&uStack_38 < param_1 + 8)) goto LAB_01756214;
          uVar6 = param_2[7];
          if (&uStack_38 < puVar7 && puVar7 < &uStack_34) goto LAB_01756214;
          uVar2 = 1;
          param_1[7] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                       uVar6 >> 0x18;
        }
        else {
          uVar2 = 0;
        }
        if (local_2c[0] == DAT_018ddaf8) {
          return;
        }
LAB_01756210:
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78(uVar2);
      }
    }
  }
LAB_01756214:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1756214);
  (*pcVar1)();
}

