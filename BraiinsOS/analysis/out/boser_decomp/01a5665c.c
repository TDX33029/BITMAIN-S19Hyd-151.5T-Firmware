// FUN_01a5665c @ 01a5665c size=796 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a5665c(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_27c;
  int local_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  int iStack_268;
  int iStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int local_254;
  int *local_250;
  int local_24c;
  undefined1 auStack_248 [112];
  int local_1d8 [26];
  int local_170;
  int *local_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int *piStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int *piStack_144;
  int iStack_140;
  int iStack_13c;
  undefined1 auStack_134 [76];
  int local_e8;
  int *local_e4;
  undefined1 auStack_e0 [88];
  undefined1 auStack_88 [100];
  
  if (*param_2 == 1) {
    if (param_2[0x17] != 7) goto LAB_014d2044;
    iVar5 = param_2[8];
    iVar6 = param_2[9];
    iStack_27c = param_2[0xb];
    local_278 = param_2[0xc];
    iStack_274 = param_2[0xd];
    iStack_270 = param_2[0xe];
    iStack_26c = param_2[0xf];
    iStack_268 = param_2[0x10];
    iVar4 = param_2[0x11];
    iStack_264 = iVar4;
    if (param_2[7] != 0) {
      piVar1 = (int *)FUN_01a5592c(param_2[6]);
      piVar2 = (int *)*piVar1;
      do {
        piVar3 = piVar2;
        if (piVar3 == (int *)piVar1[1]) {
          FUN_018f2d80(piVar1,&DAT_01d2c370);
          local_250 = (int *)0x8;
          piVar2 = &local_254;
          local_24c = 0;
          local_254 = 0;
          local_260 = 0;
          FUN_01272b34(piVar2);
          local_254 = param_2[5];
          local_250 = (int *)param_2[6];
          local_24c = param_2[7];
          piVar3 = (int *)((uint)&local_150 | 4);
          iVar7 = local_24c * 0x70;
          piVar1 = local_250;
          while( true ) {
            if (iVar7 == 0) break;
            FUN_01bed4e2(auStack_248,piVar1,0x70);
            *piVar1 = 0;
            FUN_01a55f68(&local_150,auStack_248);
            iVar8 = local_150;
            if (local_150 == 4) {
              FUN_01bed4e2((uint)auStack_88 | 4,&iStack_148,0x60);
              iVar8 = 2;
            }
            else {
              FUN_01bed4e2(auStack_88,piVar3,100);
              piVar2 = local_e4;
              iVar4 = local_e8;
            }
            FUN_01bed4e2((uint)local_1d8 | 4,auStack_88,100);
            local_1d8[0] = iVar8;
            local_170 = iVar4;
            local_16c = piVar2;
            FUN_01a5665c(&local_150,local_1d8);
            iVar4 = local_150;
            local_168 = *piVar3;
            iStack_164 = piVar3[1];
            iStack_160 = piVar3[2];
            piStack_15c = (int *)piVar3[3];
            iStack_158 = piVar3[4];
            iStack_154 = piVar3[5];
            iVar8 = 3;
            if (local_150 != 4) {
              FUN_01bed4e2(auStack_e0,auStack_134,0x54);
              iVar8 = iVar4;
            }
            local_150 = local_168;
            iStack_14c = iStack_164;
            iStack_148 = iStack_160;
            piStack_144 = piStack_15c;
            iStack_140 = iStack_158;
            iStack_13c = iStack_154;
            FUN_01a56124(piVar1);
            iVar4 = iStack_13c;
            piVar2 = piStack_144;
            *piVar1 = iVar8;
            piVar1[1] = local_150;
            piVar1[2] = iStack_14c;
            piVar1[3] = iStack_148;
            piVar1[4] = (int)piStack_144;
            piVar1[5] = iStack_140;
            piVar1[6] = iStack_13c;
            FUN_01bed4e2(piVar1 + 7,auStack_e0,0x54);
            iVar7 = iVar7 + -0x70;
            piVar1 = piVar1 + 0x1c;
          }
          param_1[1] = local_260;
          param_1[2] = uStack_25c;
          param_1[3] = uStack_258;
          param_1[4] = local_254;
          param_1[5] = local_250;
          param_1[6] = local_24c;
          *param_1 = 4;
          if (-1 < iVar5) {
            FUN_0134bd64(iVar5,iVar6);
          }
          FUN_01a45c4c(&iStack_27c);
          return;
        }
        piVar2 = piVar3 + 0x1c;
        iVar7 = *piVar3;
        *piVar1 = (int)piVar2;
      } while ((iVar7 != 1) || ((uint)piVar3[0x17] < 2));
      FUN_018f2d80(piVar1,&DAT_01d2c370);
    }
    iVar4 = param_2[3];
    iVar5 = param_2[4];
    iVar6 = param_2[5];
    iVar7 = param_2[6];
    piVar2 = (int *)((uint)&local_150 | 4);
    *piVar2 = param_2[2];
    piVar2[1] = iVar4;
    piVar2[2] = iVar5;
    piVar2[3] = iVar6;
    piVar2[4] = iVar7;
    iVar4 = param_2[8];
    iVar5 = param_2[9];
    iVar6 = param_2[10];
    iVar7 = param_2[0xb];
    piVar2[5] = param_2[7];
    piVar2[6] = iVar4;
    piVar2[7] = iVar5;
    piVar2[8] = iVar6;
    piVar2[9] = iVar7;
    iVar4 = param_2[0xd];
    iVar5 = param_2[0xe];
    iVar6 = param_2[0xf];
    iVar7 = param_2[0x10];
    iVar8 = param_2[0x11];
    piVar2[10] = param_2[0xc];
    piVar2[0xb] = iVar4;
    piVar2[0xc] = iVar5;
    piVar2[0xd] = iVar6;
    piVar2[0xe] = iVar7;
    piVar2[0xf] = iVar8;
    *param_1 = 1;
    FUN_01bed4e2(param_1 + 1,&local_150,0x58);
    param_1[0x17] = 7;
  }
  else {
    if (*param_2 != 3) {
LAB_014d2044:
      FUN_01bed4e2(param_1,param_2,0x70);
      return;
    }
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    iVar6 = param_2[4];
    iVar7 = param_2[5];
    iVar8 = param_2[6];
    param_1[1] = param_2[1];
    param_1[2] = iVar4;
    param_1[3] = iVar5;
    param_1[4] = iVar6;
    param_1[5] = iVar7;
    param_1[6] = iVar8;
    *param_1 = 4;
  }
  return;
}

