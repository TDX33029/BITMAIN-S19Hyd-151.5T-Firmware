// FUN_00061c20 @ 00061c20  size=864  callers=0
// program: bmminer


undefined4 FUN_00061c20(int param_1,int param_2)

{
  undefined1 *puVar1;
  ssize_t sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  void *__buf;
  int unaff_r4;
  uint __n;
  undefined4 uVar8;
  char *__file;
  bool bVar9;
  stat64 sStack_90;
  
  piVar7 = *(int **)(param_1 + 0x1434);
  iVar5 = piVar7[1];
  puVar1 = (undefined1 *)**(undefined4 **)(param_2 + 0x10);
  if (0 < iVar5) {
    unaff_r4 = 0;
  }
  (*(undefined4 **)(param_2 + 0x10))[1] = puVar1;
  if (0 < iVar5) {
    do {
      iVar5 = *(int *)(*piVar7 + unaff_r4 * 4);
      unaff_r4 = unaff_r4 + 1;
      iVar5 = (**(code **)(iVar5 + 0x242c))(iVar5,param_2);
      if (iVar5 != 0) {
        FUN_000658a8(2,"src/rule.c",0x11d,"zlog_spec_gen_path fail");
        return 0xffffffff;
      }
      piVar7 = *(int **)(param_1 + 0x1434);
    } while (unaff_r4 < piVar7[1]);
    puVar1 = *(undefined1 **)(*(int *)(param_2 + 0x10) + 4);
  }
  *puVar1 = 0;
  iVar5 = FUN_0005f330(*(undefined4 *)(param_1 + 0x1878),param_2);
  if (iVar5 == 0) {
    __file = (char *)**(undefined4 **)(param_2 + 0x10);
    iVar5 = open64(__file,*(uint *)(param_1 + 0x102c) | 0x441,*(undefined4 *)(param_1 + 0x1028));
    if (iVar5 < 0) {
      piVar7 = __errno_location();
      uVar4 = 0xffffffff;
      FUN_000658a8(2,"src/rule.c",0x127,"open file[%s] fail, errno[%d]",
                   **(undefined4 **)(param_2 + 0x10),*piVar7);
    }
    else {
      __buf = (void *)**(undefined4 **)(param_2 + 0x1c);
      __n = (*(undefined4 **)(param_2 + 0x1c))[1] - (int)__buf;
      sVar2 = write(iVar5,__buf,__n);
      if (sVar2 < 0) {
        piVar7 = __errno_location();
        FUN_000658a8(2,"src/rule.c",0x12d,"write fail, errno[%d]",*piVar7);
        uVar4 = 0xffffffff;
        close(iVar5);
      }
      else {
        if (*(uint *)(param_1 + 0x1868) != 0) {
          uVar6 = *(int *)(param_1 + 0x186c) + 1;
          if (uVar6 < *(uint *)(param_1 + 0x1868)) {
            *(uint *)(param_1 + 0x186c) = uVar6;
          }
          else {
            *(undefined4 *)(param_1 + 0x186c) = 0;
            iVar3 = fsync(iVar5);
            if (iVar3 != 0) {
              piVar7 = __errno_location();
              FUN_000658a8(2,"src/rule.c",0x134,"fsync[%d] fail, errno[%d]",iVar5,*piVar7);
            }
          }
        }
        iVar5 = close(iVar5);
        if (iVar5 < 0) {
          piVar7 = __errno_location();
          FUN_000658a8(2,"src/rule.c",0x138,"write fail, maybe cause by write, errno[%d]",*piVar7);
          uVar4 = 0xffffffff;
        }
        else {
          if (*(uint *)(param_1 + 0x1450) < __n) {
            FUN_000658a8(0,"src/rule.c",0x13e,
                         "one msg\'s len[%ld] > archive_max_size[%ld], no rotate",__n,
                         *(uint *)(param_1 + 0x1450));
            return 0;
          }
          iVar5 = __xstat64(3,__file,&sStack_90);
          if (iVar5 == 0) {
            uVar6 = *(uint *)(param_1 + 0x1450);
            iVar5 = (int)uVar6 >> 0x1f;
            sStack_90.st_size._4_4_ =
                 sStack_90.st_size._4_4_ + (uint)CARRY4((uint)sStack_90.st_size,__n);
            bVar9 = (uint)sStack_90.st_size + __n < uVar6;
            if ((int)(sStack_90.st_size._4_4_ - (iVar5 + (uint)bVar9)) < 0 ==
                (SBORROW4(sStack_90.st_size._4_4_,iVar5) !=
                SBORROW4(sStack_90.st_size._4_4_ - iVar5,(uint)bVar9))) {
              uVar8 = *(undefined4 *)(DAT_00b2d318 + 0x1428);
              uVar4 = FUN_00061268(param_1,param_2);
              iVar5 = FUN_0006026c(uVar8,__file,__n,uVar4,*(undefined4 *)(param_1 + 0x1450),
                                   *(undefined4 *)(param_1 + 0x1454));
              if (iVar5 != 0) {
                FUN_000658a8(2,"src/rule.c",0x14f,"zlog_rotater_rotate fail");
                return 0xffffffff;
              }
            }
            return 0;
          }
          piVar7 = __errno_location();
          FUN_000658a8(1,"src/rule.c",0x143,"stat [%s] fail, errno[%d], maybe in rotating",__file,
                       *piVar7);
          uVar4 = 0;
        }
      }
    }
  }
  else {
    FUN_000658a8(2,"src/rule.c",0x120,"zlog_format_output fail");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

