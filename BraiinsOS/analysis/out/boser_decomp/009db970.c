// FUN_009db970 @ 009db970 size=984 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009db970(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 local_328;
  undefined4 local_324;
  int local_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  int iStack_310;
  undefined4 local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  undefined1 auStack_190 [364];
  
  local_328 = param_2;
  FUN_00aeed24(&local_308);
  iVar16 = local_300;
  iVar10 = local_304;
  iVar1 = local_308;
  if (local_308 == -0x80000000) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_304;
    return;
  }
  local_324 = 8;
  FUN_00abb70c(&local_308,param_2);
  iVar17 = local_300;
  iVar11 = local_304;
  iVar2 = local_308;
  if (local_308 == -0x7fffffff) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_304;
    goto LAB_009dbb6c;
  }
  FUN_00abb70c(&local_308,param_2);
  iVar18 = local_300;
  iVar12 = local_304;
  iVar3 = local_308;
  if (local_308 == -0x7fffffff) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_304;
  }
  else {
    FUN_00abb70c(&local_308,param_2);
    iVar19 = local_300;
    iVar13 = local_304;
    iVar4 = local_308;
    if (local_308 == -0x7fffffff) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_304;
    }
    else {
      FUN_00abb70c(&local_308,param_2);
      iVar20 = local_300;
      iVar14 = local_304;
      iVar5 = local_308;
      if (local_308 == -0x7fffffff) {
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_304;
      }
      else {
        FUN_00a880cc(&local_308,param_2);
        if ((char)local_308 == '\0') {
          uVar7 = local_308._1_1_;
          FUN_00a880cc(&local_308,param_2);
          if ((char)local_308 == '\x01') goto LAB_009dbb14;
          uVar8 = local_308._1_1_;
          local_324 = 2;
          FUN_00a880cc(&local_308,param_2);
          if ((char)local_308 == '\x01') goto LAB_009dbb14;
          uVar9 = local_308._1_1_;
          FUN_0094fefc(&local_308,&local_328);
          iVar21 = local_300;
          iVar15 = local_304;
          iVar6 = local_308;
          if (local_308 != 3 || local_304 != 0) {
            local_320 = local_2fc;
            iStack_31c = iStack_2f8;
            iStack_318 = iStack_2f4;
            iStack_314 = iStack_2f0;
            iStack_310 = iStack_2ec;
            if (local_308 == 2 && local_304 == 0) {
              uVar22 = 8;
            }
            else {
              FUN_0094da10(&local_308,&local_328);
              if (local_308 == 4 && local_304 == 0) {
                goto LAB_009dbb18;
              }
              FUN_01bed4e2(auStack_190,&local_2fc,0x16c);
              if (local_308 != 3 || local_304 != 0) {
                FUN_01bed4e2(param_1 + 0xb,auStack_190,0x16c);
                param_1[0x6e] = iVar18;
                param_1[0x6f] = iVar4;
                param_1[0x70] = iVar13;
                param_1[0x71] = iVar19;
                param_1[0x72] = iVar5;
                param_1[0x73] = iVar14;
                param_1[0x74] = iVar20;
                param_1[0x6a] = iVar11;
                param_1[0x6b] = iVar17;
                param_1[0x6c] = iVar3;
                param_1[0x66] = iVar1;
                param_1[0x67] = iVar10;
                param_1[0x68] = iVar16;
                param_1[0x69] = iVar2;
                param_1[0x6d] = iVar12;
                param_1[3] = local_320;
                param_1[4] = iStack_31c;
                param_1[5] = iStack_318;
                param_1[6] = iStack_314;
                param_1[7] = iStack_310;
                *(undefined1 *)((int)param_1 + 0x1d6) = uVar9;
                *(undefined1 *)((int)param_1 + 0x1d5) = uVar8;
                *(undefined1 *)(param_1 + 0x75) = uVar7;
                param_1[8] = local_308;
                param_1[9] = local_304;
                param_1[10] = local_300;
                *param_1 = iVar6;
                param_1[1] = iVar15;
                param_1[2] = iVar21;
                return;
              }
              uVar22 = 9;
            }
            local_300 = FUN_00a9d070(uVar22,&DAT_01c0c3d0,&DAT_01d064b8);
          }
        }
        else {
LAB_009dbb14:
          local_300 = local_304;
        }
LAB_009dbb18:
        *param_1 = 2;
        param_1[1] = 0;
        param_1[2] = local_300;
        if (iVar5 != -0x80000000) {
          FUN_019bb7e0(iVar5,iVar14);
        }
      }
      if (iVar4 != -0x80000000) {
        FUN_019bb7e0(iVar4,iVar13);
      }
    }
    if (iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,iVar12);
    }
  }
  if (iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,iVar11);
  }
LAB_009dbb6c:
  FUN_019bb7e0(iVar1,iVar10);
  return;
}

